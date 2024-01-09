#include <stdio.h>

int main()
{
    int a, b;
    int sum;
    while(scanf("%d", &a)!=EOF)
    {
        scanf("%d", &b);
        sum = a+b;
        printf("%d\n", sum*sum);
    }
}
