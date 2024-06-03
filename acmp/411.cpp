#include <bits\stdc++.h>
#define e <<
double a,b,c;
using namespace std;
main(){
    cin>>a>>b>>c;
    if (!a) {if (!b)  cout e (!c?-1:0); else cout e "1\n" e -c/b;}
    else {c=b*b-4*a*c;
        if(!c) cout e "1\n" e -b/2/a;
    else if(c<0) cout e 0; else cout e "2\n" e -(b+sqrt(c))/2/a e endl e -(b-sqrt(c))/2/a;
}
}
