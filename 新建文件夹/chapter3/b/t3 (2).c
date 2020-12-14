/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main()
{
	int n,s,i,x,v,y;
	printf("请输入学生人数：");
	scanf_s("%d", &n);
	x = 0; y = 0;
	for (i = 1; i <= n; i++) {
		printf("请输入学生成绩：\n");
		scanf_s("%d", &s);
		if (s >= 60) {
			printf("及格\n"); x = x + 1; y = y + s;
		}
		else {
			y = y + s;
			printf("不及格\n");
		}
	}
	v = y / n;
	printf("及格人数=%d", x);
	printf("平均成绩=%d",v);
	return 0;
}