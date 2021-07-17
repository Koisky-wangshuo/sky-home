// #include <stdio.h>
// int main()
// {
//     printf("请输入两个整数。\n");
//     int x, y;
//     printf("整数x:");  scanf("%d", &x);
//     printf("整数y:");  scanf("%d", &y);
//     printf("x的值是y的%d%%\n", (100*x / y));
//     return 0;
// }
#include<stdio.h>
int main()
{
    printf("请输入两个整数。\n");
    int a,b;
    printf("整数a:");  scanf("%d",&a);
    printf("整数b:");  scanf("%d",&b);
    printf("它们的和是%d,积是%d\n",a+b,a*b);
    return 0;
}