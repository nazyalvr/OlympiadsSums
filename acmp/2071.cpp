#include <bits/stdc++.h>
using namespace std;
float n,x,y,u,q,e;
main(){
cin>>n;
while (n--){
    cin>>q>>u;
    if (q>4) q-=4, u=-u;
    e=u/sqrt(2);
    if (q==1) y+=u;
    if (q==2) x+=e, y+=e;
    if (q==3) x+=u;
    if (q==4) x+=e, y-=e;
}
cout<<setprecision(9)<<x<<' '<<y;
}
