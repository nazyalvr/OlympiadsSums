#include <bits/stdc++.h>
using namespace std;
string convertInt(int number)
{
    stringstream ss;
    ss << number;
    return ss.str();
}
int main(){
ios::sync_with_stdio(false);
int i,n,l,k=3;
string s="";
cin>>n;
while(n%2==0){s=s+"2*";n/=2;}
while ((n!=1)){
        if (pow(k,2)>n){s=s+convertInt(n)+"*"; break;}
    while (n%k==0){
        s=s+convertInt(k)+"*";
        n/=k;
    }
    k+=2;
}
s=s.substr(0,s.length()-1);
cout<<s;
}
