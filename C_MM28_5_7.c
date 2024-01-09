#include <stdio.h>

int main()
{
    int N;
    int tmp;
    while(scanf("%d", &N)!=EOF)
    {
        tmp=35;
        while(tmp<=N)
        {
            printf("%d", tmp);
            if(N-tmp>=35)
                printf(" ");
            tmp+=35;
        }
        printf("\n");
    }
}
