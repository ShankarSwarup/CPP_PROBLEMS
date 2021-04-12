#include<bits/stdc++.h>
using namespace std;
int fact(long long int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
   long long int n,k;
   cin>>n>>k;
   if(k>n)
   {
       cout<<"-1";
   }
   else
   {
     long long int ans=fact(n)/(fact(n-k)*fact(k));
     cout<<ans;
   }
}
