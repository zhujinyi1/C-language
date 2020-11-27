
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5  //学生总数
#define M 3   //课程总数

//全局变量
char xuehao[N][12]={0},xm[N][7]={0},xb[N]={0}; //f-女 m-男
double cj[N][M+2]={0};  //存放学生M门单科成绩和总分、平均分



#include"lisi.c"
#include"wangwu.c"
#include"liu.c"
#include"zhao.c"
#include"qian.c"


#include"sun.c"


/*主函数*/
int main()
{		
	//调用主菜单函数
	zhucaidan();
	return 0;
}