#include <bits/stdc++.h>
using namespace std;

int main(){
int i;
long double n,k,m=30.0,l=4000.0;
string s;
cin>>i>>n;
while (--i){
    cin>>k;
    cin>>s;
    if (s=="closer"){
        if (k>n){
            if ((k+n)/2.0>m){
                m=(k+n)/2.0;
                }
        }
        else if(n>k&&(k+n)/2.0<l){
                l=(k+n)/2.0;
        }
    }
    else{
        if (k>n){
            if ((k+n)/2.0<l){
                l=(k+n)/2.0;
                }
        }
        else if (n>k&&(k+n)/2.0>m){
                m=(k+n)/2.0;
        }
    }
    n=k;
}
if (m>l)m=l;
cout<<fixed<<setprecision(10)<<m<<' '<<l;
}
