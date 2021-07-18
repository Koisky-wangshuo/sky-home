#include<stdio.h>
int main()
{
    puts("请输入两个整数。");
    int a,b;
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    printf("a是b的%f%%。\n",(double) (100*a)/b);
    return 0;
}