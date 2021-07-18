#include <stdio.h>
int main()
{
    printf("请输入一个整数:");
    int a;
    scanf("%d", &a);
    if (a % 2)
        puts("输入的整数是奇数。");
    else
        puts("输入的整数是偶数。");
    return 0;
}