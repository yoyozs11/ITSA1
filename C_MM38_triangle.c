#include <stdio.h>

int main()
{
    int A, B, C;
    while(scanf("%d %d %d", &A, &B, &C)!=EOF)
    {
        int fit=0;
        if(A+B>C && B+C>A && A+C>B)
            fit = 1;
        if(fit)
            printf("fit\n");
        else
            printf("unfit\n");
    }
}
