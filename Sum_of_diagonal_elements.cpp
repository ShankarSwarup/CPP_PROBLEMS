//Sum of diagonal elements
#  include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[100][100];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)
        {
          cin>>arr[i][j];
        }
    }
    int first=0,second=0;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)
        {
           if(i==j)
           {
               first=first+arr[i][j];
           }
           else if(i+j==t-1)
           {
               second=second+arr[i][j];
           }
        }
    }
    cout<<first+second<<endl;
}
