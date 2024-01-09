#include <stdio.h>

int main()
{
    int a;
    double ans;
    while(scanf("%d", &a)!=EOF)
    {
        ans = a*1.6;
        printf("%.1f\n", ans);
    }
}
