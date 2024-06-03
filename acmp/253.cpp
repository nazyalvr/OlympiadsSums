#include <bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,d,s=0;
cin>>a>>b>>c>>d;
if (a==c&&b<30&&30<d)
{
    ++s;
}
else{
a=(a+1) % 24;
while (a!=c){
        if (b<30) {++s;}
        s+=(a%12)+1;
        if (a%12==0){ s+=12;}
        a=(a+1) % 24;
}
a=(a-1)%24;
if(((b<30&&30<d)&&(a==c))||(30<d&&((a+1)%24)==c)) ++s;
s+=(a+1)%24;
if ((a+1)%24==0){s+=12;}
}

cout<<s;
}
