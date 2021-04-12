#include<stdio.h>
int main()
{
	int n,arr[10000],i,k,temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
       scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
          printf("%d",i+1);
		  temp=1;
		  break;
		}
	}
	if(temp==0)
	{
		printf("-1");
	}
}
