#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, m, k, t, s, r;
 cin >> n >> m >> k;
if (k<3){
    cout<<0;
}
else {
    t=m/2;
    s=n/(k-2);
    if (n%(k-2)!=0)
    {
        ++s;
    }
    if (s>t){
        cout<<0;
    }
    else {
        s=(n+m)/k;
        if ((n+m)%k!=0){++s;}
        cout<<s;
    }
}
 return 0;
}
