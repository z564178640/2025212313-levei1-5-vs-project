#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    printf("100-999以内的水仙花数:\n");
    for (int n = 100; n <= 999; n++)
    {
        int a = n / 100;
        int b = (n / 10) % 10;
        int c = n % 10;
        if (a * a * a + b * b * b + c * c * c == n)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}