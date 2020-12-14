/*2004240223
12002°à
ÂÞÃû¼ª
*/
#include<stdio.h>
int main()
{
	int i, n, sum;
	printf("Enter n:");
	scanf_s("%d", &n);
	sum = 0;
	for (i = 1; i <= n; i++) {
		sum = sum + i;
	}
	printf("sum of numbers from 1 to %d is %d\n", n, sum);
	return 0;
}