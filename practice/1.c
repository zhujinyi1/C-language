#include<stdio.h>
int main()
{
  int a,b,c,m,t,i;
  scanf("%d%d%d",&a,&b,&c);
  if(a>c)
    t=a,a=c,c=t;
  if(b>c)
    t=b,b=c,c=t;
  if(a+b>c&&c-b<a&&c-a<b)
  {
  if(a*a+b*b>c*c)
    m=3;
  if(a*a+b*b<c*c)
    m=2;
  else
    m=1;
  }
  else
    m=0;
    printf("%d",m);
  return 0;
}