#include<stdio.h>
int main()
{
	char str[10000];
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		
		for(char ch=48;ch<=57;ch++)
		{
			if(str[i]==ch)
			{
				printf("%c",str[i]);
			}
		}
	}
}
