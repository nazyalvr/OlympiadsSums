#include<iostream>
using namespace std;

int x[5],y[5];

bool cw(int i, int j, int tx, int ty)
{
return (x[j]-x[i]) * (ty-y[i]) - (y[j]-y[i]) * (tx-x[i]) < 0;
}

bool d(int i, int j, int tx, int ty)
{
return (x[j]-x[i]) * (ty-y[i]) - (y[j]-y[i]) * (tx-x[i]) == 0;
}

main()
{

int tx,ty;
int n=3;
for(int i=0; i<n; ++i)
{
cin>>x[i]>>y[i];
}
cin>>tx>>ty;
x[n]=x[0];
y[n]=y[0];
x[n+1]=x[1];
y[n+1]=y[1];

bool sign=cw(0,1,tx,ty);

for(int i=1; i<=n; ++i)
{
if(cw(i, i+1, tx, ty)!=sign && !d(i, i+1, tx, ty))
{cout<<"Out"; return 0;}
}

cout<<"In";
}

