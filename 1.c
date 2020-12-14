#define N 10
#include<stdio.h>
int main()
{
	int j,i,k,index,temp;
	double ave,sum;
	int a[N];
	for(i=0;i<N-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N-1;i++)
	{
		index=i;
		for(j=i+1;j<N;j++)
		{
			if(a[j]<a[index])
			index=j;
		}
		if(i!=index)
		{
			temp=a[index];
			a[index]=a[i];
			a[i]=temp;
		}
		for(k=0;k<N;k++)
		printf("%d",a[k]);
	}

	return 0;
}