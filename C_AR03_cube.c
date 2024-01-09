#include <stdio.h>

int main()
{
    int arr[6];
    int tmp;
    int ans = 0;
    for(int i=0;i<6;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<6;i++)
    {
        tmp = 1;
        for(int j=0;j<3;j++)
        {
            tmp *= arr[i];
        }
        ans+=tmp;
    }
    printf("%d\n", ans);
}
