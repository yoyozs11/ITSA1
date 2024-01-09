#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int pixel;
    int is_edge;
}Graph;

int main()
{
    int N, n, m;
    scanf("%d", &N);
    while(N!=0)
    {
        scanf("%d %d", &n, &m);
        Graph **arr;
        arr = (Graph**)malloc(sizeof(Graph*)*n);
        for(int i=0;i<n;i++)
        {
            arr[i] = (Graph*)malloc(sizeof(Graph)*m);
        }
        //read input
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d", &arr[i][j].pixel);
                arr[i][j].is_edge = 0;
            }
        }
        //check edge
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j].pixel == 1)
                {
                    if(i-1 != -1)//up
                    {
                        if(arr[i-1][j].pixel == 0)
                            arr[i][j].is_edge = 1;
                    }
                    if(i+1 != n)//down
                    {
                        if(arr[i+1][j].pixel == 0)
                            arr[i][j].is_edge = 1;
                    }
                    if(j-1 != -1)//left
                    {
                        if(arr[i][j-1].pixel == 0)
                            arr[i][j].is_edge = 1;
                    }
                    if(j+1 != m)//right
                    {
                        if(arr[i][j+1].pixel == 0)
                            arr[i][j].is_edge = 1;
                    }
                }
            }
        }
        //output
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j].is_edge == 1)
                    printf("0");
                else
                    printf("_");
                printf(" ");
            }
            if(i!=n-1)
                printf("\n");
        }
        if(N!=1)
            printf("\n\n");
        else
            printf("\n");
        N--;
    }
}
