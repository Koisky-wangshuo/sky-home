// #include <stdio.h>
// int main()
// {
//     printf("请输入两个整数。\n");
//     int a, b;
//     printf("整数1:");
//     scanf("%d", &a);
//     printf("整数2:");
//     scanf("%d", &b);
//     if (a == b)
//         puts("它们相等");
//     else
//         puts("它们不相等");
//     return 0;
// }

#include <stdio.h>
int main()
{
    printf("请输入两个整数。\n");
    int a, b;
    printf("整数1:");
    scanf("%d", &a);
    printf("整数2:");
    scanf("%d", &b);
    if (a!=b)
        puts("它们不相等");
    else
        puts("它们相等");
    return 0;
}