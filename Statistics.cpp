#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	char arr[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
       scanf("%s",arr[i]);
	}
	int a=0,arr1[1000],count,max=-1000,min=100000,j;
	int id1,id2;
	for(i=0;i<n;i++)
	{
	   count=0;int temp=0;
       for(j=i;j<n;j++)
	   {
		   if(strcmp(arr[j],arr[i])==0)
		   {
			   for(int k=0;k<=a;k++)
			   {
				   if(j!=0&&j==arr1[k])
				   {
                      temp=1;
					  break;
				   }
			   }
			   if(temp!=1)
			   {
                  count++;
				  arr1[a]=j;
				  a++;
			   }
		   }
	   }
	   if(count>max)
	   {
		   max=count;
		   id1=i;
	   }
	   else if(count<=min&&count!=0)
	   {
		   min=count;
		   id2=i;
	   }
	}
	printf("%s %d\n",arr[id1],max);
	printf("%s %d\n",arr[id2],min);
}
