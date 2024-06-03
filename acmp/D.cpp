#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,i,j,o=1,s,yq=0;
int main()
{
cin>>n>>m;
ll a[n];
set<ll> f;
set<ll> b;
set<ll> nast;
set<ll> q;
ll y[m];
for (i=0;i<n;i++)
    {
    cin>>a[i];
    q.insert(a[i]);
    nast.insert(a[i]+1);
    b.insert(a[i]-1);
    }

    while (m)
    {
        nast.clear();
        for (int i:f)
        {
            if (q.find(i)==q.end())
            {
                y[yq]=i;
                yq++;
                q.insert(i);
                nast.insert(i+1);
                m--;
                s+=o;
                if (!m)
                    break;
            }
        }
        if (!m)
                    break;
        f=nast;
        nast.clear();
        for (int i : b)
        {
            if (q.find(i)==q.end())
            {
                y[yq]=i;
                yq++;
                q.insert(i);
                nast.insert(i-1);
                s+=o;
                --m;
                if (!m)
                    break;
            }
        }
        b=nast;
        o++;
    }

    cout<<s<< endl;

    for(i=0;i<yq;i++)
        cout<<y[i]<<' ';
}
