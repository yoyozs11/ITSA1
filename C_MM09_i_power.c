#include <stdio.h>

int main()
{
    int power_arr[31];
    power_arr[0] = 1;
    for(int i=1;i<31;i++)
    {
        power_arr[i] = 2*power_arr[i-1];
    }
    int tmp;
    while(scanf("%d", &tmp)!=EOF)
    {
        if(tmp>=31)
            printf("Value of more than 31\n");
        else
            printf("%d\n", power_arr[tmp]);
    }

}
