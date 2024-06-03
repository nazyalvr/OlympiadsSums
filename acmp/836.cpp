#include<bits/stdc++.h>
#define e std::
int n,j,b;
main(){
    e cin>>n;
    int a[n];
    while (n--){
        e cin>>b;
        if (b/64%2&b%2<1) a[j++]=b;
        }
    e sort(a,a+j);
    e cout<<j<<'\n';
    for (;++n<j;) e cout<<a[n]<<' ';
}
