/*
ף��һ
�����12002
2004240205
����3�ĳ˷���
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

		printf("3��%d�η�Ϊ%d\n\n", i, m);
	}
	return 0;
}