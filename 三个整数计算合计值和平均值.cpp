#include<stdio.h>
int main()
{
    printf("请输入三个整数。\n");
    int a,b,c;
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    printf("整数c:"); scanf("%d",&c);
    printf("它们的合计值是%05d。\n",a+b+c);
    printf("它们的平均值是%06.2f。\n",(double) (a+b+c)/3);
    return 0;
}