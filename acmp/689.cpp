#include <bits/stdc++.h>
using namespace std;
int n,i,m,u,k,l,mi=1e7,r,,b[33];
main(){
cin>>n;
int a[n],j[999],char o[999];
for(;i<n;) cin>>a[i++];
for (i=0;i<n;i++){
    for(k=2;k<33;k++){
    m=0;
    l=a[i];
    u=1;
    for (q=0;q<k;q++){b[q]=0;}
    while (l!=0){
        if (b[l%k]<1)
            {
                b[l%k]++;
                m++;
        }
        j[u++]=l%k;
        l/=k;
        m++;
        }
    if (m<mi){mi=m;a[n]=k;r=0; while(--u){if (j[u]<10) o[r++]='0'+j[u];
    else {o[r++]='A'-10+j[u]}     }
    }
}
}
for (i=0;i<n;i++){cout<<a[i]<<' ';
}
}
