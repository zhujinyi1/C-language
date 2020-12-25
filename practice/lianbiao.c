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
���ܣ����
������ͷ�ڵ�
����ֵ���� 
*/
void add(NODE *head)
{
    NODE *p,*q,*new;
    int i,j;
    char a[12];
    p=head;
    p=p->next;
    for(i=0;p->next!=NULL;i++)
        p=p->next;
    printf("��������嵽�ģ�����(0~%d)",i);
    scanf("%d",&j);
    if(j<0||j>i)
    {
        printf("����������ڵ�");
    }

    else
    {
        while(j!=0)
        {
            p=p->next;
            j--;
        }
        q=p->next;
        new=(NODE *)malloc(sizeof(NODE));
        if(new==NULL)
        {
            printf("no enough memory!");
        }
        else
        {
            q=p->next;
            printf("enter name:");
            scanf("%s",a);
            strcpy(new->name,a);
            printf("enter score:");
            scanf("%d",&new->score);
            p->next=new;
            new->next=q;
        }
        
    }
    
}

/*
���ܣ�ɾ��
������ͷָ�롤
����ֵ����
*/
void f_delete(NODE *h)
{
    NODE *p,*q;
    int i,j;
    p=p->next;
    for(i=0;p->next!=NULL;i++)
        p=p->next;
    printf("����ɾ��˭(0~%d)",i);
    scanf("%d",&j);
    if(j<0||j>i)
    {
        printf("����������ڵ�");
    }
    while(j!=0)
    {
        p=p->next;
        j--;
    }
    q=p->next;
    
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
    exit(0);
}

/*������*/
int main()
{
    int a;
    NODE * h=NULL;
    while(1)
    {
        printf("enter your choice:");
        scanf("%d",&a);
    
        switch(a)
        {
            case 1:
                h=input();
                break;              //��������
            case 2:
                output(h);
                break;              //�������
            case 3:
                add(h);             //����
                break;
            case 4:
                f_delete(h);          //ɾ��
                break;
            case 5:                 //�ͷ��ڴ�
                f_free(h);
                break;
            default :printf("exit");exit(0);
        }
    }
    return 0;
}