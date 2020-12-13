/*链表*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//创建结构体
struct stu
{
    char name[12];
    int score;
    struct stu *next;
};
typedef struct stu NODE;              //定义，将结构体名字命名为NODE

/*
功能：创建链表
参数：无
返回值：链表头节点
*/
NODE *input() 
{
    NODE *head,*pnew,*tail;
    char a[12];

    if((head=(NODE *)malloc(sizeof(NODE)))==NULL)
    {
        printf("not enough space!");
        return NULL;
    }
    head->next=NULL;
    tail=head;
    while(1)
    {
        fflush(stdin);
        printf("input your name:(enter # to break)\n");
        gets(a);
        if(strcmp(a,"#")==0)
            break;
        pnew=(NODE *)malloc(sizeof(NODE));
        if(pnew==NULL)
        {
            printf("not enough space!");
            break;
        }
        else
        {
            strcpy(pnew->name,a);
            fflush(stdin);
            scanf("%d",&pnew->score);
        }
        pnew->next=NULL;
        tail->next=pnew;
        tail=pnew;
    }
    return (head);
} 

/*
功能：输出
参数：无
返回值：无
*/
void output(NODE * h)
{
    NODE *p;
    printf("姓名\t成绩\n");
    for(p=h->next;p!=NULL;p=p->next)
    {
        printf("%s\t%d\n",p->name,p->score);
    }
    printf("\n");
}

/*
功能：清理空间
参数：头节点
返回值：无
*/
void f_free(NODE *head)
{
    NODE *p;
    p = head;
    while (p != NULL)
    {
        head = p->next;
        free(p);
        p = head;
    }
}

/*主函数*/
int main()
{
    NODE * h=NULL;
            h=input();              //创建链表
            output(h);              //输出链表
    f_free(h);
    return 0;
}