/*
ף��һ
2004240205
���ʵ��
*/
#include<stdio.h>
void s(float a,float *m,float *n);
int main()
{
    float a,b,c;
    printf("enter a:\n");
    scanf("%f",&a);
    s(a,&b,&c);
    printf("%f\n%f\n",b,c);
    return 0;
}
void s(float a,float *m,float *n)
{
    *m=(int)a;
    *n=a-*m;
}