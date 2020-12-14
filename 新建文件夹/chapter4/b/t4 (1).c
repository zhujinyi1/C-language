/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main()
{
	double x, y,n,i;
	x = 0.0; n = 1.0; i = -2.0;
	printf("请输入正实数y：");
	scanf_s("%lf", &y);
	do {
		i = i + 3.0;
		x = x + n/ i;
		n = -n;
	} while (1.0/ i >y);
		printf("%.6lf", x);
	return 0;
}
