#include<stdio.h>   
int main()
{
    printf("求长方形的面积。\n");
    int length, width;
    printf("长：");
    scanf("%d", &length);
    printf("宽：");
    scanf("%d", &width);
    printf("面积是：%d。\n", length * width);;
    return 0;
}