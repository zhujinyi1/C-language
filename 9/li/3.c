/*
ף��һ
2004240205
�޸�ѧ��ָ���γ̳ɼ�
*/
#include<stdio.h>
struct student{
    int num;
    char name[10];
    int computer,english,math;
    double average;
};
int update_score(struct student *p,int n,int num,int course,int score);/*��������*/
int main()
{
    int course,i,n,num,pos,score;
    struct student students[50];/*����ṹ����*/
    
    /*����n��ѧ����Ϣ*/
    printf("Input n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("number:");
        scanf("%d",&students[i].num);
        printf("name:");
        scanf("%s",students[i].name);
        printf("math score:");
        scanf("%d",&students[i].math);
        printf("english score:");
        scanf("%d",&students[i].english);
        printf("computer score:");
        scanf("%d",&students[i].computer);
    }
        /*������޸�ѧ����Ϣ*/
        printf("Input the number of the students to be updated:");
        scanf("%d",&num);
        printf("Choice the course :1.math 2.english 3.computer:");
        scanf("%d",&course);
        printf("Input the new score:");
        scanf("%d",&score);
        /*���ú����޸�ѧ���ɼ�*/
        pos=update_score(students,n,num,course,score);
        /*����޸ĺ��ѧ����Ϣ*/
        if(pos==-1)
            printf("NOT FOUND!");
        else
        {
            printf("After Update:\n");
            printf("num\t math\t english\t compter\n");
            printf("%d\t %d\t %d\t %d\n",students[pos].num,students[pos].math,students[pos].english,students[pos].computer);
        }
    return 0;
}
/*�Զ��庯�����޸�ѧ���ɼ�*/
int update_score(struct student *p,int n,int num,int course,int score)
{
    int i,pos;
    for(i=0;i<n;i++,p++)
    {
        if(p->num==num)         //��ѧ�Ų���
        break;
    }
    if(i<n)
    {
        switch(course){
            case 1:p->math=score;break;
            case 2:p->english=score;break;
            case 3:p->computer=score;break;
        }
        pos=i;
    }
    else
    {
        pos=-1;
    }
    return pos;
    
}