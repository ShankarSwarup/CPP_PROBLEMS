#include<stdio.h>
int main()
{
	int n,i,j,k;
	char arr[1000][1000];
	scanf("%d",&n);
	if(n%2!=0)
	{
      for(i=0;i<n;i++)
	  {
		  for(j=0;j<(2*n)-1;j++)
		  {
			  if(i%2==0)
			  {
				  if(j%2==0)
				  {
                     arr[i][j]='*';
				  }
				  else if(j%2!=0)
				  {
					  arr[i][j]='A';
				  }
			  }
			  else if(i%2!=0)
			  {
				 if(j%2==0)
				  {
                     arr[i][j]='A';
				  }
				  else if(j%2!=0)
				  {
					  arr[i][j]='*';
				  } 
			  }
		  }
	  }
	}
	else if(n%2==0)
	{
       for(i=0;i<n;i++)
	  {
		  for(j=0;j<(2*n)-1;j++)
		  {
			  if(i%2==0)
			  {
				  if(j%2==0)
				  {
                     arr[i][j]='A';
				  }
				  else if(j%2!=0)
				  {
					  arr[i][j]='*';
				  }
			  }
			  else if(i%2!=0)
			  {
				 if(j%2==0)
				  {
                     arr[i][j]='*';
				  }
				  else if(j%2!=0)
				  {
					  arr[i][j]='A';
				  } 
			  }
		   }
	    }
	}
	k=n-2;int l=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=k;j++)
		{
           printf(" ");
		}
		for(j=k+1;j<l;j++)
		{
			printf("%c",arr[i][j]);
		}
		for(j=l;j<(2*n)-1;j++)
		{
			printf(" ");
		}
		k--;
		l++;
		printf("\n");
	}
}
