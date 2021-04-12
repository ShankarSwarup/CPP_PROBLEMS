#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++)
    {
         if(str[i]>=48||str[i]<=57)
         {
             count++;
         }
    }
    cout<<count<<endl;
}
