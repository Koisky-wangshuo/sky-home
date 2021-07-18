#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个整数:");
    scanf("%d", &a);
    if (a % 5)
        puts("输入的整数不能被5整除。");
    else
        puts("输入的整数能被5整除。");
    return 0;
}