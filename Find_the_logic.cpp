#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[1000];
		scanf("%s",str);
		for(int i=0;str[i]!='\0';i++)
		{
			if(i%2==0)
			{
				printf("%c",str[i]);
			}
		}
		for(int i=0;str[i]!='\0';i++)
		{
			if(i%2!=0)
			{
				printf("%c",str[i]);
			}
		}
		printf("\n");
	}
}
