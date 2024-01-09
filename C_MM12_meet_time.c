#include <stdio.h>

int main()
{
    //30*2.54=76.2
    //100-76.2=23.8
    int dif;
    double tmp;
    int ans;
    while(scanf("%d", &dif)!=EOF)
    {
        dif*=100;
        tmp = dif/23.8;
        ans = tmp;
        if(tmp>ans)
            printf("%d\n", ans+1);
        else
            printf("%d\n", ans);

    }
}
