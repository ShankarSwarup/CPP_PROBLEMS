#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,str1;
        map<char,int>mp;
        cin>>str>>str1;
        int i;
        for(i=0;i<str.length();i++)
        {
           mp[str[i]]++;
        }
        int count=0;
        for(i=0;i<str1.length();i++)
        {
            if(mp[str1[i]]==0)
            {
              count=1;
              break;
            }
        }
        mp.clear();
        int count1=0;
        for(i=0;i<str1.length();i++)
        {
           mp[str1[i]]++;
        }
        for(i=0;i<str.length();i++)
        {
            if(mp[str[i]]==0)
            {
              count1=1;
              break;
            }
        }
        if(count==1||count1==1)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
    }
}
