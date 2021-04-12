#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
           cin>>a[i][j];
		}
	}
	int temp=0,temp1=0;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i][j]!=0)
			{
				temp=1;
				break;
			}
		}
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				temp1=1;
				break;
			}
		}
	}
	if(temp==0&&temp1==1)
	{
		cout<<"upper"<<endl;
	}
	else if(temp1==0&&temp==1)
	{
       cout<<"lower"<<endl;
	}
	else
	{
		cout<<"none"<<endl;
	}
}
