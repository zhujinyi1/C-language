#include<stdio.h>

void hannuo(char a,char b,char c,int n)
{
    if(n==1)
    {
        printf("%c->%c\n",a,b);
        return ;
    }
    else
    {
        hannuo(a,c,b,n-1);
        printf("%c->%c\n",a,b);
        hannuo(c,a,b,n-1);
    }
    
}
int main()
{
    int n;
    printf("请输入金盘数量: ");
    scanf("%d",&n);
    hannuo('a','b','c',n);
}