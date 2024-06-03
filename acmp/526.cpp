#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long a=0,b,i,m=0,k;
    bool f;
    cin>>s>>b;
    long long c[s.length()];
    for(i=0;i<s.length();i++){
        if((s[i]>='0')&&(s[i]<='9')){
        c[i]=s[i]-'0';
        if (c[i]>m){m=c[i];}
        }
        else{
            c[i]=s[i]-'A'+10;
            if (c[i]>m){m=c[i];}
        }
    }
    m++;
    f=1;
    while ((m<37)&&f){
        for(i=0;i<s.length();i++){
            a+=c[i]*pow(m,s.length()-i-1);
        }
        if (a==b){f=0;
        cout<<m;
        }
        m++;
        a=0;
    }
    if (f) {cout<<0;}
    return 0;
}

