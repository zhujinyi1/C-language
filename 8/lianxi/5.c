/*
ף��һ
2004240205
��С��������ѡ������
*/
#include<stdio.h>
int main()
{
    int a[10];
    int i,j,n,t,k;
    printf("enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    j=0;
    for(i=0;i<n;i++)
    {
        j=i;
    for(t=i;t<n;t++)
    {
        if(a[j]>a[t])
        j=t; 
    }
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}