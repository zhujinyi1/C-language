/*
ף��һ
2004240205
�˻�������
*/
#include"stdio.h"
#include"stdlib.h"
long size;              /*���ڱ���sizeof(struct LogData)*/
struct LogData {        /*��¼�Ľṹ*/
	long logid;         /*��¼��ID*/
	char logdate[11];   /*��¼��������*/        
	char lognote[15];   /*��¼�¼�˵��*/
	double charge;      /*�������ã�����ʾ֧��������ʾ����*/
	double balance;     /*���*/
};
int inputchoice()
{
	int mychoice;
	printf("\n Enter your choice: \n");
	printf("1 -Add a new cash LOG. \n2 -List All Cash LOG. \n");
	printf("3 -Query Last Cash LOG. \n0 -End program. \n");
	scanf("%d",&mychoice);
	return mychoice;
}
long getLogcount (FILE *cfptr)   /*��ȡ�ļ���¼����*/
{
	long begin,end,logcount;
	fseek(cfptr,0L,SEEK_SET);
	begin=ftell(cfptr);
	fseek(cfptr,size,SEEK_END);
	end=ftell(cfptr);
	logcount=(end-begin) /size-1;
	return logcount;
}
void ListAllLog(FILE *cfptr)     /*�г�˵����֧��ˮ��*/
{
	struct LogData log;
	fseek(cfptr,0L,SEEK_SET);
	fread(&log,size,1,cfptr);
	printf("logid logdata lognote charge balance\n");
	while(! feof(cfptr)){
	printf("%-6ld%-11s%-15s%10.2lf%10.2lf\n",
		log.logid,log.logdate,log.lognote,log.charge,log.balance);
	fread(&log,size,1,cfptr);
	};
}
void QueryLastLog(FILE *cfptr)    /*��ѯ��ʾ���һ����¼*/
{
	struct LogData log;
	long logcount;
	logcount=getLogcount(cfptr);
	if(logcount>0)
	{                             /*��ʾ�м�¼����*/
		fseek(cfptr,size*(logcount-1),SEEK_SET);/*��λ����¼*/
		fread(&log,size,1,cfptr);/*��ȡ����¼*/
		printf("The last log is: \n");
		printf("logid:%-6ld\nlogdate:%-11s\nlognote:%-15s\n",
			log.logid,log.logdate,log.lognote);
		printf("charge:%-10.2lf\nbalance:%-10.2lf\n",
			log.charge,log.balance);/*��ʾ����¼����*/
	}
	else printf("no logs in file!\n");
}
void AddNewLog(FILE *cfptr)
{                                     /*����¼�¼*/
	struct LogData log,lastlog;
	long logcount;
	printf("Input logdate(format:2006-01-01):");
	scanf("%s",log.logdate);
	printf("Input lognote:");scanf("%s",log.lognote);
	printf("Input Charge:Income+and expend-:");
	scanf("%lf",&log.charge);
	logcount=getLogcount(cfptr);/*��ȡ��¼��*/
	if(logcount>0){
		fseek(cfptr,size*(logcount-1),SEEK_SET);
		fread(&lastlog,size,1,cfptr);/*��������¼*/
		log.logid=lastlog.logid+1;  /*��¼�Ű�˳�����ϴεĺ�+1*/
		log.balance=log.charge+lastlog.balance;
	}
	else{                           /*����ļ��ǳ�ʼ״̬����¼��Ϊ0*/
		log.logid=1;
		  log.balance=log.charge;
	}
	rewind(cfptr);
	printf("logid=%ld\n",log.logid);
	fwrite(&log,sizeof(struct LogData),1,cfptr);/*д���¼*/
}
FILE *openfile(char *openmode)/*���ļ�*/
{
	FILE *fp;
	if((fp=fopen("cashbox.dat",openmode))==NULL){
		printf("can not open file cashbox.dat!\n");
		exit(0);
	}
	return (fp);
}
int main()
{
	FILE *fp;int choice;
	size=sizeof(struct LogData);
	while((choice=inputchoice())!=0){
		switch (choice){
		case 1:
			fp=openfile("ab+");
			AddNewLog(fp);
			break;
		case 2:                  /*�г����е�����֧�����*/
			fp=openfile("rb");
			ListAllLog(fp);
			break;
		case 3:                  /*��ѯ����¼�����*/
			fp=openfile("rb");
			QueryLastLog(fp);
			break;
		default:
			printf("Input Error.");break;
		}
	}
	if(fclose(fp)){
		printf("Can not close the file!\n ");
		exit(0);
	}
	return 0;
}