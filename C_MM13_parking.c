#include <stdio.h>

int main()
{
    int start_h, start_min;
    int end_h, end_min;
    scanf("%d%d%d%d", &start_h, &start_min, &end_h, &end_min);
    int total_h, total_min;
    total_h = end_h-start_h;
    total_min = end_min-start_min;
    if(total_min<0)
    {
        total_min+=60;
        total_h-=1;
    }
    int total_money = 0;
    if(total_h>=4)//over 4 hours
    {
        total_money+=(total_h-4)*120;
        total_h = 4;
        if(total_min>=30)
        {
            total_money+=60;
            total_min-=30;
        }
    }
    if(total_h>=2)//over 2 hours
    {
        total_money+=(total_h-2)*80;
        total_h = 2;
        if(total_min>=30)
        {
            total_money+=40;
            total_min-=30;
        }
    }
    if(total_h>=0)
    {
        total_money+=(total_h)*60;
        total_h = 0;
        if(total_min>=30)
        {
            total_money+=30;
            total_min-=30;
        }
    }
    printf("%d\n", total_money);
}
