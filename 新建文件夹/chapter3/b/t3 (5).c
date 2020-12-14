/*2004240223
ÂŞÃû¼ª
12002°à*/
#include<stdio.h>
int main()
{
	double x, y;
	printf("ÇëÊäÈëx£º");
	scanf_s("%lf", &x);
	if (x < 0) {
		y = 0;
	}
	else {
		if (x >= 0 && x <= 15) {
			y = 4 * x / 3;
		}
		else {
			y = 2.5*x - 10.5;
		}
	}
	printf("y=%.2lf", y);
	return 0;
}