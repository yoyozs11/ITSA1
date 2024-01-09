#include <stdio.h>
#define max 25

int main()
{
    int n, output;
    int has_car;
    scanf("%d", &n);
    int **arr = (int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        arr[i] = (int*)malloc(sizeof(int)*2);
    }
    for(int i=0;i<n;i++)
        scanf("%d%d", &arr[i][0], &arr[i][1]);

    output = 0;
    for(int i=0;i<n;i++)
    {
        has_car = 0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i][0]>=arr[j][1])
                {
                    arr[j][1] = max;
                    has_car=1;
                    break;
                }

            }
        }
        if(!has_car)
            output+=1;
    }
    printf("%d\n", output);
}
