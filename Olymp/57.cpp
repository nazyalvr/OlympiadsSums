#import <bits/stdc++.h>
int n,i;
using namespace std;
string s;
main(){
cin>>n;
for (;i<=n;) s+=to_string(i++);
cout<<s.find(n, 1);
}
