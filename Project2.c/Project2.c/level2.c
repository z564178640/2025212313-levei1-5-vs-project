#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	return*(int*)b - *(int*)a;
}
int main()
{
	int arr[7];
	printf("请输入七个整型数据:\n");
	scanf("%d,%d,%d,%d,%d,%d,%d", &arr[0], &arr[1], &arr[2], &arr[3], arr[4], arr[5], arr[6]);
	qsort(arr, 7, sizeof(int), compare);
	printf("降序排列结果:\n");
	for (int i = 0; i < 7; i++)
	{
		if (i == 0)
			printf("%d", arr[i]);
		else
			printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}