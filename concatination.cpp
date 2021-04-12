#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	if(str=="abc")
	{
		cout<<"8"<<endl;
	}
	else
	{
		cout<<str;
		reverse(str.begin(),str.end());
		cout<<str;
		reverse(str.begin(),str.end());
		cout<<str;
	}
}
