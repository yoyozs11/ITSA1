#include <stdio.h>

int main()
{
    int radius_square = 10000;
    int x, y;
    while(scanf("%d%d", &x, &y)!=EOF)
    {
        if(x*x+y*y>radius_square)
            printf("outside\n");
        else
            printf("inside\n");
    }
}
