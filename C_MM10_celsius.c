#include <stdio.h>

int main()
{
    double c, f;
    while(scanf("%lf", &c)!=EOF)
    {
        f = c*1.8 + 32;
        printf("%.1f\n", f);
    }
}
