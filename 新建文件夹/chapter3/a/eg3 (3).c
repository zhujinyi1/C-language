/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main()
{
	int x, i, z;
	double g, t;
	printf("请输入学生人数z:");
	scanf_s("%d", &z);
	x = 0; t = 0;
	for (i = 1; i <= z; i++) {
		printf("请输入成绩g：");
		scanf_s("%lf", &g);
		t = t + g;
		if (g < 60) {
			x++;
		}
	}
	printf("平均分=%.2f\n", t / z);
	printf("不及格人数=%d\n", x);
	return 0;

}