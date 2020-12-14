/*
祝津一
计算机12002
2004240205
计算3的乘方表
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int m, i, n;
	m = 1;
	printf("enter n");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		m = pow(3, i);

		printf("3的%d次方为%d\n\n", i, m);
	}
	return 0;
}