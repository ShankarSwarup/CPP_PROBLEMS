//Which lift
#include<iostream>
using namespace std;
int main()
{
	int t,a=0,b=7;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		if(n-a<b-n)
		{
			cout<<"A"<<endl;
			a=n;
		}
		else if(b-n<n-a)
		{
			cout<<"B"<<endl;
			b=n;
		}
		else if(b-n==n-a)
		{
			cout<<"A"<<endl;
			a=n;
		}
	}
}
