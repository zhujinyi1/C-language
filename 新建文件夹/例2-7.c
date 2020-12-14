/*
祝津一
计算机12002
2004240205
求一到n的和
*/
#include<stdio.h>
int main()
{
	int n, i,sum;
	sum = 0;
	printf("enter n=");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("从1到%d的和为%d",n, sum);
	return 0;
}