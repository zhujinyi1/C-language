/*
ף��һ
�����12002
2004240205
ƽ�����ĺ�
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
		printf("��1��%d��ƽ������Ϊ%.2lf", n, sum);
	
	return 0;
}