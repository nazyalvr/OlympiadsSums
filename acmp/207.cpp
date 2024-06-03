#include <bits/stdc++.h>
using namespace std;
double n,x,y,u,q,e;
main(){
cin>>n;
while (n){
        n--;
    cin>>q>>u;
    e=u/sqrt(2);
    if (q>4) {q-=4; u=-u;}
    if (q==1) y+=u;
    if (q==2) {x+=e; y+=e;}
    if (q==3) x+=u;
    if (q==4) {x+=e; y-=e;}
}
cout<<fixed<<setprecision(3)<<x<<' '<<y;
}
