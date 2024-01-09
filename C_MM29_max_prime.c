#include <stdio.h>

int check_prime(int number)
{
    int cnt = 0;
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
            cnt+=1;
    }
    if(cnt == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    int max_prime;
    int is_prime;
    while(scanf("%d", &n)!=EOF)
    {
        max_prime = 0;
        if(n == 1)
            printf("1\n");//?
        else if(n == 2)
            printf("2\n");//?
        else
        {
            for(int i=1;i<n;i++)
            {
                is_prime = check_prime(i);
                if(is_prime)
                {
                    max_prime = i;
                }

            }
            printf("%d\n", max_prime);
        }
    }
}
