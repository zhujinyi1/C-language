/*
ף��һ
2004240205
������������ĺ�
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum,i,*p;
    printf("Enter n:\n");
    scanf("%d",&n);
    if((p=(int *) calloc(n,sizeof(int)))==NULL)      /*Ϊ����p����n�����οռ�*/
    {
        printf("Not able to allocate memory.\n");
        exit(1);
    }
    printf("Enter %d integers:",n);                    /*����n������*/
    for(i=0;i<n;i++)
    scanf("%d",p+i);
    sum=0;    
    for(i=0;i<n;i++)                                 /*����n��������*/
    sum=sum+*(p+i);
    printf("The sum is %d\n",sum);
    free(p);                                          /*�ͷŶ�̬����ռ�*/
    return 0;
}