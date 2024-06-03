#include <bits/stdc++.h>
using namespace std;

main(){
int l,r,i,j,p,k=0;
cin>>l>>r;
for(i=l;i<=r;i++){
    j=i;
    p=1;
    while (j){
        p*=j%10;
        j/=10;
    }
    if (p) {
        if(!(i%p)) k++;
    }
}
cout<<k;

}
