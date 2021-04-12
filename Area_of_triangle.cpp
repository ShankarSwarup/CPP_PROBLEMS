#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	double s=(a+b+c)/2.0;
	double ans=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%lf",ans);
}
