#include <stdio.h>
int main()
{
    printf("请输入一个整数:");
    int a;
    scanf("%d", &a);
    if (a)
        puts("该整数不是0");
    else
        puts("该整数是0");
    return 0;
}