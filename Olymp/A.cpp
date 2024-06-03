#include <bits\stdc++.h>
using namespace std;
int i,t,n,k,m,j,b;
int main(){
cin>>t;
int a[t];
for (i=0;i<t;i++) a[i]=0;
for (i=0;i<t;i++){
    cin>>n>>k>>m;
    for (j=0;j<k;j++){
        cin>>b;
        if (b==n) {a[i]=1;}
    }
    for (j=0;j<m;j++){
        cin>>b;
        if (b==n) a[i]=0;
    }
}
for (i=0;i<t;i++) if (a[i]) cout<<"YES"<<endl; else cout<<"NO"<<endl;
}
