#include <stdio.h>
int main()
{
    printf("请输入两个整数\n");
    int vx, vy;
    printf("整数vx:"); scanf("%d", &vx);
    printf("整数vy:"); scanf("%d", &vy);
    printf("vx+vy=%d\n", vx + vy);
    printf("vx-vy=%d\n", vx - vy);
    printf("vx*vy=%d\n", vx * vy);
    printf("vx/vy=%d\n", vx / vy);
    printf("vx%%vy=%d\n",vx%vy);
    return 0;
}