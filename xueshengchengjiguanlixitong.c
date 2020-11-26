/*
学生成绩管理系统
*/
#include<stdio.h>
#include<string.h>

#define N 5  //学生总数
#define M 3   //课程总数

//函数1：输入n个学生全部信息
/*
函数功能：输入N个学生全部信息
参数：学生学号数组，姓名数组，成绩数组，性别数组
返回值：无
*/
void input(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,j;
	printf("\n输入学生全部信息\n");
	for(i=0;i<N;i++)
	{
		fflush(stdin);//清空键盘缓冲区
		printf("\n请输入第%d个学生学号=",i+1);
		gets(xh[i]);//scanf("%10s",xuehao[i]);

		fflush(stdin);
		printf("\n请输入第%d个学生姓名=",i+1);
		gets(xm[i]);

		fflush(stdin);
		printf("\n请输入第%d个学生性别=",i+1);
		xb[i]=getchar();
		while(xb[i]!='m'&&xb[i]!='f')
		{
			printf("\n输入错误，只能m/f\n");
			fflush(stdin);
			printf("\n请输入第%d个学生性别=",i+1);
			xb[i]=getchar();
		}

		fflush(stdin);
		printf("\n请输入第%d个学生成绩：",i+1);
		for(j=0;j<M;j++)
		{
			printf("\n第%d门课=",j+1);scanf("%lf",&cj[i][j]);
		}
	}
}

//函数2:输出N个学生全部信息
/*
函数功能：输出N个学生全部信息
参数：学生学号数组，姓名数组，成绩数组，性别数组
返回值：无
*/
void output(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,j;
	printf("\n   学号     姓名   性别  成绩1  成绩2  成绩3  总分  平均分\n");
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xh[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
		printf("\n");
	}
}

//函数3：n个学生成绩求和求平均
/*
函数功能：N个学生成绩求和、求平均
参数：成绩数组
返回值：无
*/
void sum_ave(double cj[][M+2])
{
	int i,j;
	printf("\n学生成绩求和，平均分\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			cj[i][M]+=cj[i][j];
		cj[i][M+1]=cj[i][M]/M;
	}
	printf("\n学生成绩求和，平均分 完成！！\n");
}

//函数4:按姓名查找
/*
函数功能：按姓名查找
参数：姓名，性别，学号，成绩
返回值：无
*/
void search_name(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	char x[12],i,j,k=0;
	printf("请输入要查找的对象:");
	getchar();
	gets(x);
	for(i=0;i<5;i++)
	{
		if(strcmp(x,xm[i])==0)
		{
				if(k==0)
				{
					printf("\n   学号     姓名    性别  成绩1  成绩2  成绩3  总分  平均分\n");
					k++;
				}
				printf("%10s %8s  %2c ",xh[i],xm[i],xb[i]);
				for(j=0;j<M+2;j++)
					printf("%8.2lf",cj[i][j]);
					printf("\n");
		}
	}
		if(k==0)
	printf("\n没有找到该同学\n");
}

//函数5:按性别查找
/*
函数功能：按性别查找
参数：姓名，性别，学号，成绩
返回值：无
*/
void search_sex(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	char x[12],i,j,k=0;
	printf("请输入要查找的对象的性别:");
						getchar();
	gets(x);
	for(i=0;i<5;i++)
	{
		if(strcmp(x,xb[i])==0)
		{
				if(k==0)
				{
					printf("\n   学号     姓名    性别  成绩1  成绩2  成绩3  总分  平均分\n");
					k++;
				}
				printf("%10s %8s  %2c ",xh[i],xm[i],xb[i]);
				for(j=0;j<M+2;j++)
					printf("%8.2lf",cj[i][j]);
					printf("\n");
		}
	}
	if(k==0)
	printf("\n没有找到该同学\n");
}

//函数6:按学号查找
/*
函数功能：按学号查找
参数：姓名，性别，学号，成绩
返回值：无
*/
void search_number(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	char x[12],i,j,k=0;
	printf("请输入要查找的对象的学号:");
						getchar();
	gets(x);
	for(i=0;i<5;i++)
	{
		if(strcmp(x,xh[i])==0)
		{
				if(k==0)
				{
					printf("\n   学号     姓名    性别  成绩1  成绩2  成绩3  总分  平均分\n");
					k++;
				}
				printf("%10s %8s  %2c ",xh[i],xm[i],xb[i]);
				for(j=0;j<M+2;j++)
					printf("%8.2lf",cj[i][j]);
					printf("\n");
		}
	}
		if(k==0)
	printf("\n没有找到该同学\n");
}

//函数7：按姓名排序
/*
参数：姓名，性别，成绩，学号
返回值：无
*/
void sort_name(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,t,j=0,z=0,s=0,k=0,a[N];
	for(i=0;i<N;i++)
	{
		j=i;
		t=j;
		for(j=i;j<N;j++)
		{
			if(strcmp(xm[j],xm[i])==-1)
			{	
				j=i;
			}
		}
		a[z]=j;
		z++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
		printf("\n   学号     姓名    性别  成绩1  成绩2  成绩3  总分  平均分\n");	
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xh[a[i]],xm[a[i]],xb[a[i]]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[a[i]][j]);
		printf("\n");
	}
}

//函数8：按总分排序
/*
参数：姓名，性别，成绩，学号
返回值：无
*/
void sort_sum(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,t,j=0,z=0,s=0,k=0,a[N];
	for(i=0;i<N;i++)
	{
		j=i;
		t=j;
		for(j=i;j<N;j++)
		{
			if(cj[t][4]<cj[j][4])
			{	
				t=j;
			}
		}
		a[z]=t;
		z++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
		printf("\n   学号     姓名    性别  成绩1  成绩2  成绩3  总分  平均分\n");	
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xh[a[i]],xm[a[i]],xb[a[i]]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[a[i]][j]);
		printf("\n");
	}
}

//函数9：按学号排序
/*
参数：姓名，性别，成绩，学号
返回值：无
*/
void sort_number(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,t,j=0,z=0,s=0,k=0,a[N];
	for(i=0;i<N;i++)
	{
		j=i;
		t=j;
		for(j=i;j<N;j++)
		{
			if(strcmp(xh[t],xh[j])==-1)
			{	
				t=j;
			}
		}
		a[z]=t;
		z++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
		printf("\n   学号     姓名    性别  成绩1  成绩2  成绩3  总分  平均分\n");	
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xh[a[i]],xm[a[i]],xb[a[i]]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[a[i]][j]);
		printf("\n");
	}
}

//函数10：按性别统计
/*
参数：性别
返回值：无
*/
void sum_sex(char xb[])
{
	int m=0,f=0,i;
	for(i=0;i<N;i++)
	{
		if(xb[i]=='m')
		{
			m++;
		}
		else
		{
			f++;
		}
		
	}
	printf("男生数量为%d\n",m);
	printf("女生数量为%d\n",f);
}

//函数11：按科目统计
/*
参数：科目成绩
返回值：无
*/
int sum_score(double cj[N][M+2])
{
	int k,i,bujige,you,liang,zhong,cha;
	bujige=you=liang=zhong=cha=0;
	while(1)
	{
		bujige=you=liang=zhong=cha=0;
		printf("\n┏━━━━━━━━按成绩统计━━━━━━━━┓");
		printf("\n┃ 1、按科目一              ┃");
		printf("\n┃ 2、按科目二              ┃");
		printf("\n┃ 3、按科目三              ┃");
		printf("\n┃ 4、按总分                ┃");
		printf("\n┃ 0、退出                  ┃");
		printf("\n┃ 注：优（90-100）         ┃");
		printf("\n┃     良（80-89）          ┃");
		printf("\n┃     中（70-79）          ┃");
		printf("\n┃     差（60-69）          ┃");
		printf("\n┃     不及格（0-59）       ┃");
		printf("\n┃ 0、返回                  ┃");
		printf("\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━┛");			
		printf("\n━━请输入你的选择：");
		scanf("%d",&k);
		if(k!=1&&k!=2&&k!=3&&k!=4)
		{
			return 1;	
		}
		for(i=0;i<N;i++)
		{
			if(cj[i][k-1]>=90&&cj[i][k-1]<=100)
				you++;
			else if (cj[i][k-1]>=80&&cj[i][k-1]<=89)
				liang++;
			else if (cj[i][k-1]>=70&&cj[i][k-1]<=79)
				zhong++;
			else if(cj[i][k-1]>=60&&cj[i][k-1]<=69)
				cha++;
			else
				bujige++;
		}
		printf("统计完成！\n");
		printf("成绩为优的有%d人\n",you);
		printf("成绩为良的有%d人\n",liang);
		printf("成绩为中的有%d人\n",zhong);
		printf("成绩为差的有%d人\n",cha);
		printf("  不及格的有%d人\n",bujige);
	}
}

/*主函数*/
int main()
{
	char xh[N][12],xm[N][7],xb[N]; //'f'-女 'm'-男   "男"：xb[N][3]
	double cj[N][M+2]={0};  //存放学生M门单科成绩和总分、平均分
	int choice=0,k=0,n=0;
start:	while(1)
    {
		k=0;
		printf("\n┏━━━━━━━━━━━主菜单━━━━━━━━━━┓");
		printf("\n┃ 1、输入全部学生信息       ┃");
		printf("\n┃ 2、学生成绩求和，平均分   ┃");
		printf("\n┃ 3、输出三个学生成绩       ┃");
		printf("\n┃ 4、查找                   ┃");
		printf("\n┃ 5、排序(从大到小)         ┃");
		printf("\n┃ 6、统计                   ┃");		
		printf("\n┃ 0、退出                   ┃");
		printf("\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		printf("\n━━请输入你的选择：");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n输入%d个学生信息\n",N);
			 input(xh,xm,cj,xb);
			 break;
		case 2:sum_ave(cj);
		     break;
		case 3: output(xh,xm,cj,xb);
		      break;
		case 4:
			while(1)
			{
				k=0;
				printf("\n┏━━━━━━━━━━━━查找━━━━━━━━━━┓");
				printf("\n┃ 1、按姓名                ┃");
				printf("\n┃ 2、按学号                ┃");
				printf("\n┃ 3、按性别                ┃");
				printf("\n┃ 0、返回                  ┃");
				printf("\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
				printf("\n━━请输入你的选择：");
				scanf("%d",&k);
				switch(k)
				{
					case 1:search_name(xh,xm,cj,xb);
							break;
					case 2:search_number(xh,xm,cj,xb);
							break;
					case 3:search_sex(xh,xm,cj,xb);
					        break;
					default:printf("\n退出\n");goto start;
				}
			}
			switch(k)
			getchar();
			k=0;
			break;
		case 5:
			while(1)
			{
				printf("\n┏━━━━━━━━━━━━排序━━━━━━━━━━┓");
				printf("\n┃ 1、按姓名                ┃");
				printf("\n┃ 2、按总分                ┃");
				printf("\n┃ 3、按学号                ┃");
				printf("\n┃ 0、返回                  ┃");
				printf("\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
				printf("\n━━请输入你的选择：");
				scanf("%d",&k);
				switch(k)
				{
					case 1:sort_name(xh,xm,cj,xb);
							break;
					case 2:sort_sum(xh,xm,cj,xb);
							break;
					case 3:sort_number(xh,xm,cj,xb);
							break;
					default:printf("\n退出\n");goto start;
				}
			}
			switch(k)
			getchar();
			k=0;
			break;
		case 6:
			while(1)
			{
				k=0;
				printf("\n┏━━━━━━━━━━━━统计━━━━━━━━━━┓");
				printf("\n┃ 1、按性别                ┃");
				printf("\n┃ 2、按成绩                ┃");
				printf("\n┃ 0、返回                  ┃");
				printf("\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━┛");			
				printf("\n━━请输入你的选择：");
				scanf("%d",&k);
				switch(k)
				{
					case 1:sum_sex(xb);
							break;
					case 2:
						while(1)
							sum_score(cj);
						break;
						default:printf("\n退出\n");goto start;
				}
			}
			switch(k)
			getchar();
			k=0;
			break;
			default: printf("\n退出\n");exit(0);
		}
		switch(choice)
		getchar();//吸收脏数据—回车
	}
	return 0;
}