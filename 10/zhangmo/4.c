/*
ף��һ
2004240205
��ݹ�ʽ��
*/
#include<stdio.h>
int f(int x,int n)
{
    if(n==0)
        return 1;
    else
    {
        return -x*f(x,n-1);
    }
    
}
int main()
{
    int x,n;
    printf("enter x n:");
    scanf("%d%d",&x,&n);
    printf("%d",f(x,n));
    return 0;
}