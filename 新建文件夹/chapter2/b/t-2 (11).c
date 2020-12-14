/*2004240223
12002°à
ÂÞÃû¼ª
*/
#include<stdio.h>
int main()
{
	double i, n, sum, x;
	x = 1;
	printf("Enter n:");
	scanf_s("%lf", &n);
	sum = 0;
	for (i = 1; i <= n; i = i + 3) {
		sum = sum + x * 1 / i;
		x = -x;
	}
	printf("sum of numbers from 1 to %.2lf is %.2lf\n", n, sum);
	return 0;
}