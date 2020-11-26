/*
祝津一
2004240205
修改学生指定课程成绩
*/
#include<stdio.h>
struct student{
    int num;
    char name[10];
    int computer,english,math;
    double average;
};
int update_score(struct student *p,int n,int num,int course,int score);/*函数声明*/
int main()
{
    int course,i,n,num,pos,score;
    struct student students[50];/*定义结构数组*/
    
    /*输入n个学生信息*/
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
        /*输入待修改学生信息*/
        printf("Input the number of the students to be updated:");
        scanf("%d",&num);
        printf("Choice the course :1.math 2.english 3.computer:");
        scanf("%d",&course);
        printf("Input the new score:");
        scanf("%d",&score);
        /*调用函数修改学生成绩*/
        pos=update_score(students,n,num,course,score);
        /*输出修改后的学生信息*/
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
/*自定义函数，修改学生成绩*/
int update_score(struct student *p,int n,int num,int course,int score)
{
    int i,pos;
    for(i=0;i<n;i++,p++)
    {
        if(p->num==num)         //按学号查找
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