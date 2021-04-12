#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int gift(int n)
{
	string s=to_string(n);
	for(int i=0;i<s.length()-1;i++)
	{
         for(int j=i+1;j<s.length();j++)
		 {
			 if(s[i]==s[j])
			 {
				 return 0;
			 }
		 }
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	n=n+1;
	while(!gift(n))
	{
		n++;
	}
	cout<<n;
}
