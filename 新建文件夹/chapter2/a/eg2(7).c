/*2004240223
12002°à
ÂÞÃû¼ª
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i, n;
	double power;
	printf("Enter n:");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		power = pow(2, i);
		printf("pow(2,%d)=%.0f\n", i, power);
	}
	return 0;

}