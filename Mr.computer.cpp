#include<stdio.h>
int main()
{
int n,arr[100000];
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
scanf("%d",&arr[i]);
}
int t;
scanf("%d",&t);
while(t--)
{
    int l,r,count=0;
    scanf("%d%d",&l,&r);
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    printf("%d\n",count);
}
return 0;
}
