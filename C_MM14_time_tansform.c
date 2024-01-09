#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int day, hour, min, sec;
    day = t/86400;
    t%=86400;
    hour = t/3600;
    t%=3600;
    min = t/60;
    t%=60;
    sec = t;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", day, hour, min, sec);
}
