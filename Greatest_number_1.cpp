#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,arr[1000],i,j;
		scanf("%d",&n);
		if(n==1)
		{
			int b;
			scanf("%d",&b);
			printf("%d\n",b);
		}
		else
		{
			for(i=0;i<n;i++)
		    {
               scanf("%d",&arr[i]);
		    }
			for(i=0;i<n;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(arr[j]>arr[j+1])
					{
						int temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			for(i=n-1;i>=0;i--)
		    {
               printf("%d",arr[i]);
		    }
			printf("\n");
		}
	}
}
