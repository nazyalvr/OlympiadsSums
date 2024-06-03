#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,a,l[26],f=1;
    string s;
    getline(cin,s);
    a=s.length();
    for (i=0;i<26;i++) l[i]=0;
    for(i=0;i<a;i++)
        l[s[i]-'A']++;
    getline(cin,s);
    for (i=0;i<a;i++)
        l[s[i]-'A']--;
for (i=0;i<26;i++){if (l[i]!=0) f=0;}
if (f!=0)
cout<<"YES";
else cout<<"NO";
}
