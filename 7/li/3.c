/*
ף��һ
2004240205
��������
*/
#include<stdio.h>
int main()
{
    int a[5],i,x,m=0;
    for(i=0;i<5;i++)
    {
    printf("�������%d����",i+1);
    scanf("%d",&a[i]);
    }
    printf("������Ҫ���ҵ���x");
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        if(x==a[i]){
            printf("�������±�Ϊ %d\n",i);
            m=1;
        }
    }
    if(m==0)
    printf("NOT FOUND!!!");
    return 0;
}