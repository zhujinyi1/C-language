/*
ף��һ
2004240205
�����ֵ��Ӧ����С�±�
*/
#include<stdio.h>
int main()
{
    int a[10],n,i,t,f;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    t=0;
    for(i=0;i<n;i++){
        if(a[t]<a[i]){
            t=i;
        }
    }
    printf("���ֵΪ%d\n",a[t]);
    printf("��С�±�Ϊ%d",t);
    return 0;
}