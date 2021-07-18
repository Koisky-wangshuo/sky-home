#include<stdio.h>
int main()
{
    printf("请输入两个整数。\n");
    int a,b;
    printf("整数a："); scanf("%d",&a);
    printf("整数b："); scanf("%d",&b);
    printf("它们的平均值是%d。\n",(a+b)/2);
    return 0;
}