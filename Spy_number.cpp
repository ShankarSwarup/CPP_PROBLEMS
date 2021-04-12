#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,pro=1,count=0;
    cin>>n;
    while(n!=0)
    {
        int temp=n%10;
        sum=sum+temp;
        pro=pro*temp;
        count++;
        n=n/10;
    }
    if(sum==pro&&count==4)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}
