#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,arr[1000];
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		int k,rem=0;
		scanf("%d",&k);
		rem=k;
		for(int i=0;i<n;i++)
		{
			if(k>0)
			{
				k=k-arr[i];
				if(k<0)
				{
					arr[i]=(-1)*k;
					break;
				}
				arr[i]=0;
			}
		}
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	}
}
