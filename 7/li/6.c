/*
ף��һ
2004240205
ͳ��ͶƱ
*/
#include<stdio.h>
int main()
{
    int a[9]={0},i,t,j;
    for(i=1;i<=1000;i++)
    {
        printf("�������%d������\n",i);
        scanf("%d",&t);
        if(t>=1&&t<=1000){
            a[t]++;
        }
        else
        {
            printf("error\n");
            i--;
        }
    }
    for(j=1;j<9;j++){
        printf("��%d����ĿƱ��Ϊ%d\n",j,a[j]);
    }
    return 0;
}