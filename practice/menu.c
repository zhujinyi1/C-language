#include<stdio.h>
int main()
{
	int x,y,z;
	int t,sum=0;
	double  a;
	float  b;
	char c;//char�ͱ�����ֵ����ASCII��ֵ0~127�������������
	for(;;)
    {
		printf("\n---------------�˵�---------\n");
		printf("\n--A����������ѧ���ɼ�-------\n");
		printf("\n--B���������ѧ���ɼ�---\n");
		printf("\n--C���������ѧ���ɼ�-\n");
		printf("\n--0���˳�---------\n");
		printf("\n--���������ѡ�񣺣�A��B��C��");
		scanf("%c",&c);
		
		switch(c)
		{
		case 'A':printf("\n��������ѧ���ɼ�\n");
			 scanf("%d%d%d",&x,&y,&z);//x,y,zΪ����ѧ���ɼ�
			 break;
		case 'B': printf("\n����ѧ���ɼ����\n");
		     sum=0;
		     sum=x+y+z;
			 printf("\n����ѧ���ɼ��ܺ�=%d\n",sum);
		     break;
		case 'C': printf("\n�������ѧ���ɼ�\n");
		   printf("%d   %d     %d",x,y,z);//x,y,zΪ����ѧ���ɼ�
		      break;
		default: printf("\n�˳�\n");break;
		}
		scanf("%c",&c);//���������ݡ��س�
	}

/*

	printf("��������������ѧ���ɼ���");
	scanf("%d%d%d",&x,&y,&z);//x,y,zΪ����Ա���Ĺ���
	*/
	return 0;
}