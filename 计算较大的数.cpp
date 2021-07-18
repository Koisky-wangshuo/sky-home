// #include <stdio.h>
// int main()
// {
//     printf("请输入两个整数。\n");
//     int a, b;
//     printf("整数1:");
//     scanf("%d", &a);
//     printf("整数2:");
//     scanf("%d", &b);
//     if (a > b)
//         printf("较大的数是%d。\n", a);
//     else
//         printf("较大的数是%d。\n", b);
//     return 0;
// }

#include <stdio.h>
int main()
{
    puts("请输入两个整数。");
    int a, b, max;
    printf("整数1:");
    scanf("%d", &a);
    printf("整数2:");
    scanf("%d", &b);
    if (a > b) max = a;
    else max= b;
            printf("较大的数是%d.\n", max);
    return 0;
}