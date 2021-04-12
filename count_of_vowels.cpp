#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%s",str);
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e')
		{
          count++;
		}
		if(str[i]=='I'||str[i]=='i'||str[i]=='o'||str[i]=='O')
		{
          count++;
		}
		if(str[i]=='U'||str[i]=='u')
		{
          count++;
		}
	}
	printf("%d",count);
}
