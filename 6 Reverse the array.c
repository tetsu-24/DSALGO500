#include<stdio.h>
int main()
{
	int n,ary[20],i,m,ary2[20],temp;
	printf("Enter size of Array : ");
	scanf("%d",&n);
	printf("Enter %d element of array : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ary[i]);
	}
	m=n-1;
	for(i=0;i<n/2;i++)
	{
		temp=ary[i];
		ary[i]=ary[m];
		ary[m]=temp;
		m--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ary[i]);
	}
	return 0;
}
