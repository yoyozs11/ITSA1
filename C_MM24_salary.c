#include <stdio.h>

int main()
{
    int hour, salary;
    double total;
    while(scanf("%d", &hour)!=EOF)
    {
        total = 0.0;
        scanf("%d", &salary);
        if(hour>120)
        {
            total += (hour-120)*salary*1.66;
            hour=120;
        }
        if(hour>60)
        {
            total += (hour-60)*salary*1.33;
            hour = 60;
        }
        total += hour*salary;
        printf("%.1f\n", total);
    }
}
