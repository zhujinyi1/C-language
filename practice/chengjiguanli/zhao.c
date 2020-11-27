/*
函数功能：N个学生成绩求和、求平均
参数：无
返回值：无
*/
void sum_ave()
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
