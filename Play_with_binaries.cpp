#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000],b[10000]="";
	int i,count,count1,ans=0,t=10000;
	while(t--)
	{
		scanf("%s",a);
        if(strcmp(a,b)==0)
		{
			break;
		}
		count=0,count1=0;
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='0')
			{
				count++;
			}
			if(a[i]=='1')
			{
				count1++;
			}
		}
		if(count%3==0||count1%2==0)
		{
           ans++;
		}
		strcpy(b,a);
	}
	printf("%d\n",ans);
}
