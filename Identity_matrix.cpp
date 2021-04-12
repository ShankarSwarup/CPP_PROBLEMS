#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,arr[100][100],j;
	cin>>t;
	for(i=0;i<t;i++)
	{
      for(j=0;j<t;j++)
	  {
        cin>>arr[i][j];
	  }
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(i==j)
			{
				if(arr[i][j]!=arr[0][0]||arr[i][j]==0)
				{
                  cout<<"no"<<endl;
				  return 0;
				}
			}
			else
			{
				if(arr[i][j]!=0)
				{
					cout<<"no"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"yes"<<endl;
}
