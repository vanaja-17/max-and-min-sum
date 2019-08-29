#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	int sum=0,min=100000001,max=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(min>a[i])
		{
			min=a[i];
		}
		if(max<a[i])
		{
			max=a[i];
		}
	}
	//printf("%d \n",sum);
	//printf("%d ",min);
	printf("%d %d",(sum-min),(sum-max));

}
