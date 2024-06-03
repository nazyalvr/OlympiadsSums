#include <iostream>
int m,n,j,q=-99,w;
main(){
std::string s;
std::cin>>s;
n=s.length();
while (n--){
    for (m=1,j=0;j<s.length();j++)
        if(j!=n) w+=m*(s[j]-48), m*=-1;
if (w>q)q=w;
w=0;
}
std::cout<<q;
}
