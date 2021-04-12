//different killings
#include<stdio.h>
int main()
{
	int n;
	char arr[100][100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%c",&arr[i][j]);
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]=='B')
			{
                    if(i+1<n)
					{
						int l=i+1;
						for(int k=0;k<n;j++)
		                {
			            if(arr[l][k]=='W')
						{
                           count++;
						}
		                }
					}
			}
			else if(arr[i][j]=='W')
			{
                    if(i-1>=0)
					{
                    int l=i-1;
		            for(int k=0;k<n;j++)
		            {
			            if(arr[l][k]=='B')
						{
                           count++;
						}
		            }
					}
			}
		}
	}
	printf("%d",count);
}
