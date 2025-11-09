#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int nums[7];
	printf("请输入七个整数:\n");
	scanf("%d,%d,%d,%d,%d,%d,%d", &nums[0],&nums[1],&nums[2],&nums[3],&nums[4],&nums[5],& nums[6]);
	int n = 7;
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1-i; j++)
		{
			if (nums[j] < nums[j + 1])
			{
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	printf("降序结果:\n");
	for (int i = 0; i < n; i++)
		printf("%d", nums[i]);
	printf("\n");
	return 0;
}