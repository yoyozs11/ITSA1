#include <stdio.h>

int main()
{
    int input;
    int arr[101];
    int cnt = 0;
    while(scanf("%d", &input)!=EOF)
    {
        arr[cnt] = input;
        cnt+=1;
    }
    for(int i=cnt-1;i>=0;i--)
    {
        if(i!=0)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d\n", arr[i]);
        }
    }
}
