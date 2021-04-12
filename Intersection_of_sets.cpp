#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,arr[1000],n1,arr1[1000];
    map<int,int>mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cin>>n1;
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(i=0;i<n1;i++)
    {
        mp[arr1[i]]++;
    }
    int temp=0;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
      if(i->second>1)
      {
          cout<<i->first<<" ";
          temp=1;
      }
    }
    if(temp==0)
    {
        cout<<"null";
    }
}
