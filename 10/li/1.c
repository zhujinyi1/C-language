/*
ף��һ
2004240205
����Բ�������
*/
#include<stdio.h>
#include<math.h>
#define pi 3.141592654
void cal(int sel);
double vol_ball(void);
double vol_cylind(void);
double vol_cone(void);
int main()
{
    int sel;
    /*ѭ��ѡ�����Բ�������*/
    while(1)
    {
        printf("1-�����������\n");
        printf("2-����Բ�������\n");
        printf("1-����Բ׶�����\n");
        printf("����-�˳�������������\n");
        printf("����������\n");
        scanf("%d",&sel);
        if(sel<1||sel>3)
        {
            printf("�˳�");
            break;
        }
        else
            cal(sel);
    }
    return 0;
}
void cal(int sel)
{
    switch(sel)
    {
        case 1:
            printf("�������Ϊ��%.2lf\n",vol_ball());
            break;
        case 2:
            printf("Բ�������Ϊ��%.2lf\n",vol_cylind());
            break;
        case 3:
            printf("Բ׶�����Ϊ��%.2lf\n",vol_cone());
            break;
    }
}
/*�����������*/
double vol_ball()
{
    double r;
    printf("����������뾶");
    scanf("%lf",&r);
    return (4.0/3.0*pi*r*r*r);
}
/*����Բ�������*/
double vol_cylind()
{
    double r,h;
    printf("���������뾶�͸�");
    scanf("%lf%lf",&r,&h);
    return (pi*r*r*h);
}
/*����Բ׶�����*/
double vol_cone()
{
    double h,r;
    printf("������Բ׶�����뾶�͸�");
    scanf("%lf%lf",&r,&h);
    return (pi*r*r*h/3.0);
}