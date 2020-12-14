/*
祝津一
计算机12002
2004240205
计算n的乘方表
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int m, i, n;
	m = 1;
	printf("enter n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		m = pow(i, 2);

		printf("%d的乘方为%d\n\n", i, m);
	}
	return 0;
}