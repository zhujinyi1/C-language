/*
ף��һ
�����12002
2004240205
������϶����϶�ת����
*/
#include<stdio.h>
int main()
{
	double f, c, t, l, i;

	printf("�������¶�����");
	scanf_s("%lf", &l);
	printf("�������¶�����");
	scanf_s("%lf", &t);
	for (i = l; i <= t; i=i+2)
	{
		f = i;
		c = 5 * (f - 32) / 9;
		printf("���϶�=%.2lf,���϶�=%.2lf\n", f, c);
	}
	return 0;
}