/*����*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�����ṹ��
struct stu
{
    char name[12];
    int score;
    struct stu *next;
};
typedef struct stu NODE;              //���壬���ṹ����������ΪNODE

/*
���ܣ���������
��������
����ֵ������ͷ�ڵ�
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
���ܣ����
��������
����ֵ����
*/
void output(NODE * h)
{
    NODE *p;
    printf("����\t�ɼ�\n");
    for(p=h->next;p!=NULL;p=p->next)
    {
        printf("%s\t%d\n",p->name,p->score);
    }
    printf("\n");
}

/*
���ܣ�����ռ�
������ͷ�ڵ�
����ֵ����
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

/*������*/
int main()
{
    NODE * h=NULL;
            h=input();              //��������
            output(h);              //�������
    f_free(h);
    return 0;
}