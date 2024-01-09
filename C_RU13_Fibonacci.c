#include<stdio.h>

int main()
{
    int n;
    int arr[100];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<47;i++)
        arr[i] = arr[i-1]+arr[i-2];
    /*for(int i=0;i<46;i++)
    {
        printf("F(%d) = %d\n", i, arr[i+1]);
    }*/
    while(scanf("%d", &n)==1)
    {
        if(n==(-1))
            break;
        printf("%d\n", arr[n+1]);
    }
}
