#include<stdio.h>
int main()
{
    int a,b,c;
    double d;
    scanf("%d%d",&a,&b);
    c = a/b;
    d = ((double)a/(double)b);
    printf("%d\n",c);
    printf("%.0lf\n",d);
    printf("%d",(int)d);
    return 0;
}