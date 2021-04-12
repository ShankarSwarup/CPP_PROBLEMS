#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<"A"<<endl;
		}
		else if(n==2)
		{
			cout<<"B"<<endl;
		}
		else if(n==3)
		{
			cout<<"C"<<endl;
		}
		else if(n==4)
		{
			cout<<"D"<<endl;
		}
		else if(n==5)
		{
			cout<<"E"<<endl;
		}
		else if(n%4==0)
		{
			int x=n/4;
			if(x%2==0)
			{
				cout<<"B"<<endl;
			}
			else
			{
				cout<<"D"<<endl;
			}
		}
		else if(n%4==3)
		{
			cout<<"C"<<endl;
		}
		else if(n%4==2)
		{
			int x=n/4;
			if(x%2==0)
			{
				cout<<"B"<<endl;
			}
			else
			{
				cout<<"D"<<endl;
			}
		}
		else if(n%4==1)
		{
			int x=n/4;
			if(x%2==0)
			{
				cout<<"A"<<endl;
			}
			else
			{
				cout<<"E"<<endl;
			}
		}
	}
}
