/*
祝津一
计算机12002
2004240205
平方根的和
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n;
	double m, sum;
	sum = 0;
	printf("enter n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		m = sqrt(n);
		sum = sum + m;
	}
		printf("从1到%d的平方根和为%.2lf", n, sum);
	
	return 0;
}