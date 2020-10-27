#include<stdio.h>
int main()
{
	int n,ary[20],i,max,min;
	printf("Enter size of Array : ");
	scanf("%d",&n);
	printf("Enter %d element of array : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ary[i]);
	}
	min=ary[0];
	max=ary[0];
	for(i=0;i<n;i++)
	{
		if(min>ary[i])
		{
			min=ary[i];
		}
		else if(max<ary[i])
		{
			max=ary[i];
		}
	}
	printf("\nMin %d",min);
	printf("\nMax %d",max);
	return 0;
}
