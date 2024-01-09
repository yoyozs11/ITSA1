#include <stdio.h>

int main()
{
    int N;
    while(scanf("%d", &N)!=EOF)
    {
        for(int i=1;i<=N;i++)
        {
            printf("%d ", i);
            if(i==N)
                printf("= ");
            else
                printf("+ ");
        }
        printf("%d\n", N*(N+1)/2);
    }
}
