#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {

        int x,y;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        x=(Ax+Cx);
        y=(Ay+Cy);
        Dx=x-Bx;
        Dy=y-By;

        int sum=Ax*By+Bx*Cy+Cx*Dy+Dx*Ay-Ay*Bx-By*Cx-Cy*Dx-Dy*Ax;
        sum=sum/2;
        cout<<"Case "<<i<<": "<<Dx<<" "<<Dy<<" "<<abs(sum)<<endl;
    }
    return 0;
}
