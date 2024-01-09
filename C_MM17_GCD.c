#include <stdio.h>

int main()
{
    int a, b, r;
    scanf("%d%d", &b, &r);
    do
    {
        a=b;
        b=r;
        r=a%b;
    }
    while(r);
    printf("%d\n", b);
}
