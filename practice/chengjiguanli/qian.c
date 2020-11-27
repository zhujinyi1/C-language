

/*
函数功能：按照姓名查找 
参数：无
返回值：无
*/
void chazhao_xm()
{
	int i,j;
	char xingming[7]={0};
	printf("\n请输入你要查找的学生姓名=");
	fflush(stdin);
	gets(xingming);
	for(i=0;i<N;i++)
	{
		if(strcmp(xingming,xm[i])==0)
			break;
	}
	if(i>=N)
		printf("\n没有找到！！！\n");
	else
	{
		printf("\n找到了！该学生信息如下:\n");
		printf("\n   学号     姓名    性别     语文   数学   外语   总分  平均分\n");
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
	}

}


/*
函数功能：按照学号查找   
参数：无
返回值：无
*/
void chazhao_xh()
{
	int i,j;
	char xh[12]={0};
	printf("\n请输入你要查找的学生学号=");
	fflush(stdin);
	gets(xh);
	for(i=0;i<N;i++)
	{
		if(strcmp(xh,xuehao[i])==0)
			break;
	}
	if(i>=N)
		printf("\n没有找到！！！\n");
	else
	{
		printf("\n找到了！该学生信息如下:\n");
		printf("\n   学号     姓名    性别      语文   数学   外语  总分  平均分\n");
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
	}

}

/*
函数功能：按照单科成绩查找 
参数：无
返回值：无
*/
void chazhao_cj()
{
	int i,j,c=0;
	double chengji=0;
	printf("\n请输入你要查找的课程编号（1、语文  2、数学  3、外语）=");
	fflush(stdin);
	scanf("%d",&c);
	printf("\n请输入你要查找的成绩=");
	fflush(stdin);
	scanf("%lf",&chengji);
	for(i=0;i<N;i++)
	{
		if(chengji==cj[i][c-1])
			break;
	}
	if(i>=N)
		printf("\n没有找到！！！\n");
	else
	{
		printf("\n找到了！该学生信息如下:\n");
		printf("\n   学号     姓名    性别      语文   数学   外语 总分  平均分\n");
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
	}


}
/*
函数功能：查找子菜单
参数：无
返回值：无
*/
void  chazhao_zicaidan()
{
		int c=0;
		while(1)
		{
			printf("\n┏━━━查找子菜单━━━━━┓");
			printf("\n┃ 1、按照姓名查找          ┃");
			printf("\n┃ 2、按照学号查找          ┃");
			printf("\n┃ 3、按照单科成绩查找      ┃");
			printf("\n┃ 0、返回主菜单            ┃");
			printf("\n┗━━━━━━━━━━━━━┛");
			printf("\n━━请输入你的选择：");
			scanf("%d",&c);
			switch(c)
			{
			case 1:chazhao_xm();
				break;
			case 2:chazhao_xh();
				break;
			case 3: chazhao_cj();
				break;
			}
			if(c!=1&&c!=2&&c!=3)
				break;
		}
		
}
