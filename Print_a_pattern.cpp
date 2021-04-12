#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
	scanf("%s",str);
	int count=0,i,j,k,count1,maximum=-1000,index;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	for(i=0;i<=count;i++)
	{
        count1=0;
		for(j=i;j<=count;j++)
		{
			if(str[i]==str[j])
			{
				count1++;
			}
		}
		if(count1>maximum)
		{
			maximum=count1;
			index=i;
		}
	}
	for(i=1;i<=maximum;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",str[index]);
		}
		printf("\n");
	}
}
