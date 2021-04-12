#include<stdio.h>
int main()
{
	int n,arr[1000][1000],arr1[1000],r[1000],c[1000],a=0,b=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
            scanf("%d",&arr[i][j]);
		}
	}
	for(int k=0;k<n;k++)
	{
		scanf("%d",&arr1[k]);
		printf("%d ",arr1[k]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
            for(int k=0;k<n;k++)
			{
				if(arr1[k]==arr[i][j])
				{ 
				   printf("%d %d",i,j);
				   printf("\n");
                   r[a]=i;
				   c[b]=j;
				   a++;
				   b++;
				}
			}
		}
	}
	int temp=0,temp1=0;
	for(int i=0;i<a;i++)
	{
		if(r[i]!=r[i+1])
		{
			temp=1;
			break;
		}
	}
	for(int i=0;i<b;i++)
	{
		if(c[i]!=c[i+1])
		{
			temp1=1;
			break;
		}
	}
	if(temp==0)
	{
		printf("row");
	}
	else if(temp1==0)
	{
		printf("column");
	}
	else if(temp==1&&temp1==1)
	{
         printf("-1");
	}
}
