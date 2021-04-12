#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cx1,cy1,cx2,cy2,r1,r2;
    cin>>cx1>>cy1>>cx2>>cy2>>r1>>r2;
    int dis=sqrt(((cx1-cx2)*(cx1-cx2))+((cy1-cy2)*(cy1-cy2)));
    if(dis<r1+r2)
    {
        cout<<"one inside";
    }
    else if(dis>r1+r2)
    {
        cout<<"disjoint";
    }
    else if(dis==r1+r2)
    {
        cout<<"intersected";
    }
}
