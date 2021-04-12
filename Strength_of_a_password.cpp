//Strength of a password
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,c1=0,c2=0,c3=0,c4=0;
    int size=str.length();
    if(size<8)
    {
        cout<<"weak"<<endl;
    }
    else
    {
        for(i=0;i<str.length();i++)
    {
        for(char ch=48;ch<=57;ch++)
        {
           if(str[i]==ch)
           {
               c1++;
           }
        }
        for(char ch='a';ch<='z';ch++)
        {
            if(str[i]==ch)
            {
                c2++;
            }
        }
        for(char ch='A';ch<='Z';ch++)
        {
            if(str[i]==ch)
            {
                c3++;
            }
        }
        if(str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%')
        {
            c4++;
        }
        if(str[i]=='^'||str[i]=='&'||str[i]=='*'||str[i]=='~'||str[i]==',')
        {
            c4++;
        }
        if(str[i]=='.')
        {
            c4++;
        }
    }
    if(c1==0||c2==0||c3==0||c4==0)
    {
        cout<<"weak"<<endl;
    }
    else
    {
        cout<<"strong"<<endl;
    }
    }
}
