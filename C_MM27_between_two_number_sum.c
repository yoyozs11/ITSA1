#include <stdio.h>

int main()
{
    int a, b;
    int sum;
    while(scanf("%d%d", &a, &b)!=EOF)
    {
        sum=0;
        if(a<b)
        {
            for(int i=a;i<=b;i++)
                sum+=i;
        }
        else
        {
            for(int i=b;i<=a;i++)
                sum+=i;
        }
        printf("%d\n", sum);
    }
}
