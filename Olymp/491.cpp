#import <iostream>
using namespace std;
string s;
main(){
std::cin>>s;
int l=s.length(),i,f=0,g=0;
for(i=0;i<l/2;i++){
    if (s[i]!=s[l-i-1]) f=1;
    if (s[i]!=s[i+1]) g=1;
}
if (f) cout<<s;
else
if (g) cout<<s.substr(0,l-1);
else cout<<"NO SOLUTION";

}
