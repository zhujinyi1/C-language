/*
1,����:�����ַ�������
2������:�ַ����׵�ַ
3������ֵ:�ַ���ʵ�ʳ���
*/
#include<stdio.h>
int fstrlen(char str[])
{
    int n=0;//�����ַ�������
    while(str[n]!='\0')
    n++;
    return n;
}
/*
1.���ܣ������ַ���
2.������*s1,*s2
3.����ֵ����  
*/
char f_strcpy(char *s1,char *s2)
{
    char t[80]={0};
    int i,j;
    for(i=0;s1[i]!='\0';i++)
        t[i]=s1[i];
    for(i=0;s2[i]!='\0';j++,i++)
        t[i]=s2[j];
}
/*
���ܣ��ַ�������
������Ŀ���ַ�����Դ�ַ���
����ֵ����
*/
void fstrcpy(char s2[],char s1[])
{
    int i=0;
    while(s1[i]!='\0'){
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';//��s2һ����β
}
/*
���ܣ��ַ����Ƚϣ��ȴ�С��
�����������ַ���
����ֵ�� 1  s1>s2;
        -1  s1<s2;
        0   s1=s2;
*/
int fstrcmp(char s1[],char s2[])
{
    int i=0;
    while(s1[i]!='\0'&&s2[i]!='\0')
    {
        if(s1[i]<s2[i])  return -1;
        if(s1[i]>s2[1])  return 1;
        i++;
    }
    return 0;
}
#define N 5
int main()
{
    char s[N][80],temp[80];
    int i,j,index=0;
    for(i=0;i<N;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<N-1;i++)
    {
        index=i;
        for(j=i+1;j<N;j++)
        if(fstrcmp(s[j],s[index])<0)
        index=j;
        if(i!=index){
            fstrcpy(temp,s[i]);
            fstrcpy(s[i],s[index]);
            fstrcpy(s[index],temp);
        }
    }
    for(i=0;i<N;i++)
    puts(s[i]);//����ַ���
    return 0;
}