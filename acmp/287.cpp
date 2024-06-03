#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k;
set <string> s;
string q;
cin>>n>>k>>q;
while(--n+2-k)
    s.insert(q.substr(n,k));
cout<<s.size();
}
