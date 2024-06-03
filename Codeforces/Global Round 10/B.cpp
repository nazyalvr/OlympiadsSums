#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

ll n, k;

int main()
{
    start
    range
    {
        ll ma = - 1000000001, mi = 1000000001;
        cin >> n >> k;
        ll a[n], b[n];
        for(int i =0; i < n; ++i ) {cin >> a[i]; ma = max(ma, a[i]); mi = min(mi, a[i]);}
        if(!k) {for (int i = 0; i<n; i++)cout<<a[i]; cout<<'\n';}
        else for(int i = 0; i < n; ++i){a[i] = ma - a[i]; b[i] = (ma-mi)-a[i]; }
        if(k%2) {for (int i=0;i<n;++i) cout << a[i] << ' '; cout << '\n';}
        else {for (int i=0;i<n;++i) cout << b[i] << ' '; cout << '\n';}
    }
}

