#include<stdio.h>
void fact(int n)
{
    int reverse=0,rem,original;
    original=n;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("%d\n",n);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,count=0,i;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {
         int original=i;
         int o1=i,rem,reverse=0;
         while(o1!=0)
         {
             rem=o1%10;
             reverse=reverse*10+rem;
             o1=o1/10;
         }
         if(original==reverse)
         {
            count++;
         }  
        }
        printf("%d\n",count);
    }
}
