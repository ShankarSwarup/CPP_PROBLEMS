#include<stdio.h>
int main()
{
	char str[1000];
	int n;
	scanf("%s%d",str,n);
    while(n--)
	{
		int count=0,i,j;
		char temp;
		for(i=0;str[i]!='\0';i++)
		{
			temp=str[0];
			str[i]=str[i+1];
			count++;
		}
		str[count]=temp;
	}
	printf("%s",str);
}
