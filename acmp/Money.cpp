#include <iostream>
using namespace std;
int main(){
int s,n,b,q=0,i;
cin>>s>>n;
int a[s];
for (i=0;i<s;i++)
    a[i]=0;
for (i=0;i<n;i++){
    cin>>b;
    if (b<s){
        q+=a[b];
        ++a[s-b];
    }
}
cout<<q;
}
