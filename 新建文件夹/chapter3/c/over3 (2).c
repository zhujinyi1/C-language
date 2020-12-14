/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main()
{
	double x, y, z;
	printf("限速：");
	scanf_s("%lf", &x);
	printf("车速：");
	scanf_s("%lf", &y);
	if (y <= 1.1*x) {
		printf("无事");
	}
	else {
		if (y <= 1.5 * x) {
			printf("罚款200");
		}
		else {
			printf("吊销驾驶证");
		}
	}
	return 0;
}