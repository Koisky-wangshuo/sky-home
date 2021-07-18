#include<stdio.h>
int main()
{
    printf("请输入两个数。\n");
    double vx,vy;
    printf("实数vx:"); scanf("%lf",&vx);
    printf("实数vy:"); scanf("%lf",&vy);
    printf("vx+vy=%f\n",vx+vy);
    printf("vx-vy=%f\n",vx-vy);
    printf("vx*vy=%f\n",vx*vy);
    printf("vx/vy=%f\n",vx/vy);
    return 0;
}