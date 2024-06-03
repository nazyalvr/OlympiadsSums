#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

ll n, i, j;
long double h = 2e9;
ll an, ans =  9223372036854775806;

int main()
{
    start
        cin >> n;
        long double g = 1.0 / (n - 1);
        ll a[n];
        for(i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for(j = 1; j <= pow (h, g); ++j)
        {
            an = 0;
            for(i = 0; i < n; ++i)
                {
                    ll f = pow (j, i);
                    an += abs(a[i] - f);
                }
            ans = min(ans, an);
        }
        ans = min(ans, an);
        cout << ans;

}

