/*
ף��һ
2004240205
��ɺ궨��
*/
#include<stdio.h>
#define MIN(a,b) (a<b?a:b)
#define LSOLOWER(c) (((c)>='a')&&((c)<='z'))
#define ISLEAP(y) ((y%4==0&&y%100!=0)||(y%400==0))
#define PI 3.14159
#define CIRFER(r) 2*PI*(r)
int main()
{
    char c;
    double r;
    int a,b,y;
    printf("����a,b,r,y");
    scanf("%d%d%lf%d",&a,&b,&r,&y);
    printf("c\n");
    fflush(stdin);
    c=getchar();
    printf("��СֵΪ%d\n",MIN(a,b));
    if(LSOLOWER(c))
    {
        printf("��Сд��ĸ\n");
    }
    else
    {
        printf("����Сд��ĸ");
    }
    
    if(ISLEAP(y))
    {
        printf("������\n");
    }
    else
    {
        printf("��������");
    }
    
    printf("%lf",CIRFER(r));
    return 0;
}