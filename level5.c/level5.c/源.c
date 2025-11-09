#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void findMax_min(int arr[], int len, int* max, int* min)
{
    if (len <= 0)
    {
        printf("Error:数组长度必须大于0\n");
        return;
    }
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}
int main()
{
    int max_price, min_price;
    findMax_min( prices,&max_price, &min_price);
    printf("%d,%d\n", min_price, max_price);
    return 0;
}