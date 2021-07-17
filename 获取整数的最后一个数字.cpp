#include <stdio.h>
int main()
{
    printf("请输入一个整数：");
    int a;
    scanf("%d", &a);
    printf("最后一位是%d。\n", a % 10);
    return 0;
}