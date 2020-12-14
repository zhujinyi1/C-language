/*2004240223
12002班
罗名吉
*/
#include<stdio.h>
int main()
{
	double x, y;
	printf("请输入月用电量：");
	scanf_s("%lf", &x);
	if (x <= 50) {
		y = 0.53 * x;
		printf("用户支付电费：%.2lf", y);
	}
	else {
		y = 0.53 * 50 + 0.58 * (x - 50);
		printf("用户支付电费：%.2lf", y);
	}
	return 0;
}