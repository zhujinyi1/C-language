/*
ף��һ
�����12002
2004240205
�����ĸ���ƽ��ֵ
*/
#include<stdio.h>
int main()
{

	float x, a, b, c, d;
	printf("��ֱ�����abcd");
	scanf_s("%f%f%f%f", &a, &b, &c, &d);
	x = (a + b + c + d) / 4;
	printf("%.0f,%.0f,%.0f,%.0f��ƽ��ֵΪ%.1f", a, b, c, d, x);
	return 0;
}