/*
ף��һ
�����12002
2004240205
��������Ҳ����
*/
#include<stdio.h>
int main()
{
	int n, i,m;
	double k, sum;
	sum = 0;
	printf("enter m");
	scanf_s("%d", &m);
	printf("enter n=");
	scanf_s("%d", &n);
	for (i = m; i <= n; i++)
	{
		k = i * i + 1 / i;
		sum = sum + m;
	}
	printf("��Ϊ%.2lf",sum);
	return 0;
}