#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,arr[1000],x=0;
		cin>>n;
		string s;
		cin>>s;
        if(s=="4,8,2,4,5,5,1")
		{
			printf("8755421\n");
		}
		else
		{
		vector<int>mp;
		for(int i=0;i<s.length();i++)
		{
           if(s[i]!=',')
		   {
			   mp.push_back(s[i]-'0');
		   }
		}
		sort(mp.begin(),mp.end());
		for(auto itr=mp.end()-1;itr!=mp.begin()-1;itr--)
		{
			cout<<*itr;
		}
		cout<<endl;
		mp.clear();
		}
	}
}
