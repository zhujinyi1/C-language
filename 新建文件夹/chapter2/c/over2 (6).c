/*2004240223
12002°à
ÂÞÃû¼ª
*/
#include<stdio.h>
int main()
{
	int m, n,i;
	double x;
	x = 0;
	scanf_s("%d", &i);
	scanf_s("%d", &n);
	for (m = i; i <= n; i++) {
		x = x + m * m + 1 / m;
	}
	printf("%.6lf", x);
	return 0;

}