#include <stdio.h>
int main()
{
    printf("请输入一个整数:");
    int a;
    scanf("%d", &a);
    if (a == 0)
        puts("该整数为0。");
    else if (a > 0)
        puts("该整数为正数。");
    else
        puts("该整数为负数。");
    return 0;
}