#include <iostream>
using namespace std;
int s,f=1,n,b,i,j,t,m,q;
main(){
cin>>n;
int a[n];
for (;i<n;) cin>>a[i++];
cin>>b>>m;
int h[m];
for(i=0;i<m;i++){
    for (j=0;j<n;j++){
        cin>>s;
        if (s) q+=a[j];
        else f=0;    }
    q+=f*b;
    q-=2*i;
    if (q<0)q=0;
    if (q>t){t=q;}
    q=0;
    f=1;
    h[i]=t;
}
for (i=0;i<m;i++){
    cout<<h[i]<<endl;
}
}
