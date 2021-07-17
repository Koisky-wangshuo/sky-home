// // #include <stdio.h>
// // int main()
// // {
// //     puts("天");
// //     puts("地");
// //     puts("人");
// //     return 0;
// // }
// #include <stdio.h>
// int main()
// {
//     printf("请输入两个整数。\n");
//     int a, b;
//     printf("整数1：");
//     scanf("%d", &a);
//     printf("整数2：");
//     scanf("%d", &b);
//     printf("它们的乘积是：%d。\n", a * b);
//     return 0;
// }
#include <stdio.h>
int main()
{
    printf("请输入三个整数。\n");
    int a, b, c;
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    printf("整数3:"); 
    scanf("%d", &c);
    printf("它们的和是:%d\n", a + b + c);
    return 0;
}