#include <stdio.h>

int main()
{
    int min;
    double money;
    scanf("%d", &min);
    if(min>=1500)
    {
        money = min*0.9*0.79;
    }
    else if(min>800)
    {
        money = min*0.9*0.9;
    }
    else
    {
        money = min*0.9;
    }
    printf("%.1f\n", money);
}
