#include <iostream>
using namespace std;

main(){
int n,i=-1,j,k,f,l,a[30];
cin>>n;
string s[n],q;
while (++i-n)cin>>s[i];
while (i--)a[i]=0;
cin>>i;
while (i--){
    cin>>q;
    l=q.length();
    j=-1;
    while(++j-n)
        if (l==s[j].length())
        {
            k=l;
            f=1;
            while(k--)
                if(q[k]-s[j][k])
                    --f;
            if(!f)
                ++a[j];
        }
}
while(++i-n)cout << a[i] << ' ';
}
