#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int time;
    printf("请输入当前时间:");
    scanf("%d", &time);
    if (time >= 6 && time <= 11)
        printf("早上好");
    else if (time >= 12 && time <= 13)
        printf("中午好");
    else if (time >= 14 && time <= 18)
        printf("下午好");
    else
        printf("晚上好");
    return 0;
}