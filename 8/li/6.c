/*
ף��һ
2004240205
��������Ԫ�ظ����Լ����浥Ԫ��
*/
#include<stdio.h>
int main()
{
    double a[2],*p,*q;
    p=&a[0];
    q=p+1;
    printf("%d\n",q-p);
    printf("%d\n",(int)q-(int)p);
    return 0;
}