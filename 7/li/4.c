/*
ף��һ
2004240205
�����Сֵ�����±�
*/
#include<stdio.h>
int main()
{
    int a[10],i,j,b,c=1;
    for(i=0;i<10;i++){
        printf("�������%d����\n",i+1);
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++){
        c=1;
        for(b=0;b<10;b++){
            if(a[j]>a[b]){
                c=0;
                break;
            }
        }
        if(c==1)
            {
                printf("��С������%d\n",a[j]);
                printf("�±�Ϊ%d\n",j);
            }
    }
}