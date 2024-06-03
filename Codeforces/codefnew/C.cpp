#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i,a,b) for(ll i = (a); i < (b); i++)
using namespace std;

int n, i;
char a, b, c, d;
string s;

int main()
{
    start
    range
    {
        cin >> n;
        int a[n],  max1 = -1;
        forra(i, 0, n)
        {
            cin >> a[i];
            max1 = max(max1, a[i]);
        }
        int f = 0, ans = 0;
        forra(i, 0, n )
        {
            if (a[i] == max1)
                {
                    if (i > 0)
                        {
                            if (a[i-1] < a[i])
                            {
                                ans = i + 1; f = 1;
                            }
                        }
                    if (i < n - 1) {if (a[i+1] < a[i]) {ans = i + 1; f = 1;}}
                }
                if (f) break;
        }
        if (!f) cout << -1 << endl;
        else cout << ans << endl;
    }

}

