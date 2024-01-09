#include <stdio.h>

int main()
{
    int money;
    scanf("%d", &money);
    int ten, five, one;
    ten = money/10;
    money%=10;
    five = money/5;
    money%=5;
    one = money;
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", ten, five, one);
}
