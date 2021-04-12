#include<stdio.h>
#include<math.h>
int pall(int n)
{
	int reverse=0,rem,original;
	original=n;
	while(n!=0)
	{
		rem=n%10;
        reverse=reverse*10+rem;
		n=n/10;
	}
	if(original==reverse)
	{
       return 1;
	}
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
    int a=n-1;
	int b=n+1;
	while(!pall(a))
    {
		a--;
	}
	while(!pall(b))
    {
		b++;
	}
	if(abs(n-a)>abs(n-b))
	{
		printf("%d\n",b);
	}
	else if(abs(n-a)==abs(n-b))
	{
		if(a>b)
		{
          printf("%d\n",a);
		}
		else if(a<b)
		{
			printf("%d\n",b);
		}
	}
	else
	{
		printf("%d\n",a);
	}
	}
}
