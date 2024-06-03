#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

ll n, i, j;

int main()
{
    start
    range
    {
        cin>>n;
        ll a[n], b[n], mi1=1e9 , mi2= 1e9, l = 0 ;
        for (i =0; i<n; ++i){cin >> a[i]; if (a[i] < mi1) mi1 = a[i];}
        for (i =0; i<n; ++i){cin >> b[i]; if (b[i] < mi2) mi2 = b[i];}
        for (i =0; i < n; ++i)
        {
            l+=max(abs(a[i]-mi1), abs(b[i]-mi2));
        }
    cout<<l<<'\n';
    }
}
