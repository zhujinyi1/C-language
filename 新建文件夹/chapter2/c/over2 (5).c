/*2004240223
ÂŞÃû¼ª
12002°à*/
#include<stdio.h>
int fact(int n);
int main()
{
	int i, n,e;
	printf("Enter n:");
	scanf_s("%d", &n);
    e= fact(n);
    printf("e=%d\n", e);
	return 0;
}
int fact(int n)
{
	int i,x,m;
	m = 1; x = 0;
	for (i = 1; i <= n; i++) {
		m = m * i;
		x = x+ m ;
	}
	return x;

}