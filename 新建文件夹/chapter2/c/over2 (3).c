/*2004240223
12002°à
ÂÞÃû¼ª
*/
#include<stdio.h>
int main()
{
	double i, n, sum, x,y;
	x = 1; y = 1;
	printf("Enter n:");
	scanf_s("%lf", &n);
	sum = 0;
	for (i = 1; i <= n; i = i + 2) {
		sum = sum + x * y / i;
		x = -x;
		y = y + 1;
	}
	printf("sum of numbers from 1 to %.2lf is %.2lf\n", n, sum);
	return 0;
}