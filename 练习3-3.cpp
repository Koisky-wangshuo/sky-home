#include <stdio.h>
int main()
{
    printf("请输入一个整数:");
    int a;
    scanf("%d", &a);
    if (a == 0)
        printf("%d\n", a);
    else if (a > 0)
        printf("%d\n", -a);
    else if (a < 0)
        printf("%d\n", -a);
    return 0;
}