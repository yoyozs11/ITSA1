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
        {
            if(A*A+B*B == C*C || B*B+C*C == A*A || A*A+C*C == B*B)
            {
                printf("Right Triangle\n");
            }
            else if(A*A+B*B <= C*C || B*B+C*C <= A*A || A*A+C*C <= B*B)
            {
                printf("Obtuse Triangle\n");
            }
            else if(A*A+B*B >= C*C || B*B+C*C >= A*A || A*A+C*C >= B*B)
            {
                printf("Acute Triangle\n");
            }
        }
        else
        {
            printf("Not Triangle\n");
        }
    }
}
