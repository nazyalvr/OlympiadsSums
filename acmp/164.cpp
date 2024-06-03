#include <iostream>
int  i,k,j,l,q;
using namespace std;
main(){
string s;
cin>>s;
q=s.length();
while (++i<q){
    for (j=0;j<i;)
            k+=s[j++]-48;
        for (;j<q;)
            l+=s[j++]-48;
        while (l>9|k>9) l=l/100+l/10%10+l%10, k=k/100+k/10%10+k%10;
        if (l==k) {cout<<"YES"; return 0;}
        k=0;
        l=k;
}
cout<<"NO";
}
