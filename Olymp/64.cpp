#include <bits/stdc++.h>
using namespace std;
int i=2,n,k,j,f;
string s,q;
main(){
    for (;i<20220;i++){
            f=1;
        for (j=2;j*j<=i;j++)
            if (!(i%j)) f=0;
        if (f) ostringstream w, w<<i, s+=w;
    }
    cin>>n;
for(i=0;i<n;i++)
    cin>>k, q=q+s[--k];
cout<<q;
}
