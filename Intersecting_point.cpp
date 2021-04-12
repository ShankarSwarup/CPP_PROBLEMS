//intersecting lines
#include<bits/stdc++.h>
using namespace std;
void intersection(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    double a1=y2-y1;
    double b1=x1-x2;
    double c1=a1*(x1)+b1*(y1);
    double a2=y4-y3;
    double b2=x3-x4;
    double c2=a2*(x3)+b2*(y3);
    double det=a1*b2 - a2*b1;
    if(det==0)
    {
       cout<<"-1";
    }
    else
    {
        double x=(b2*c1 - b1*c2)/det;
        double y=(a1*c2 - a2*c1)/det;
        cout<<x<<" "<<y;
    }
}
int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    intersection(x1,y1,x2,y2,x3,y3,x4,y4);
}
