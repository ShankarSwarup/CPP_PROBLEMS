#include<stdio.h>
int main()
{
	int l,t;
	scanf("%d%d",&l,&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a<l||b<l)
		{
			printf("UPLOAD ANOTHER\n");
		}
		else if(a>=l&&b>=l)
		{
			if(a==b)
			{
				printf("ACCEPTED\n");
			}
			else
			{
				printf("CROP IT\n");
			}
		}
	}
}
