/*
祝津一
计算机12002
2004240205
计算n的阶乘
*/
#include<stdio.h>
int main()
{
	int m,i,n;
	m = 1;
	printf("enter n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		m = m * i;
	}
	printf("从1到%d的阶乘为%d", n, m);
	return 0;
}