#include <bits/stdc++.h>

using namespace std;

int main(){
int n,i,s1=0,s2=0,s0=0,a;
cin>>n;
for (i=0;i<n;i++){
    cin>>a;
    if (!a%3) s0++;
    else if (a%3==1) s1++;
    else s2++;
}
s0+=min(s1,s2)+(max(s1,s2)-min(s1,s2))/3;
cout<<s0;
}


