#include <stdio.h>

int main()
{
    long long arr[20];
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2;i<20;i++)
    {
        arr[i] = i*arr[i-1];
    }
    int tmp;
    while(scanf("%d", &tmp)!=EOF)
    {
        if(tmp<=12)
        {
            printf("%d\n", arr[tmp]);
        }
        else if(tmp == 13)
        {
            printf("6227020800\n");
        }
        else if(tmp == 14)
        {
            printf("87178291200\n");
        }
        else if(tmp == 15)
        {
            printf("1307674368000\n");
        }
        else if(tmp == 16)
        {
            printf("20922789888000\n");
        }
        else if(tmp == 17)
        {
            printf("355687428096000\n");
        }
        else if(tmp == 18)
        {
            printf("6402373705728000\n");
        }
        else if(tmp == 19)
        {
            printf("121645100408832000\n");
        }
    }
}
