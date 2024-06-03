#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i,a,b) for(ll i = (a); i < (b); i++)
using namespace std;

ll n, i, a, ar[18], b, nsk;
string s;


bool nq (ll j)
{
    bool f = true;
    ll a = j;
    while (a > 0)
    {
        while (a%10 == 0) a/=10;
        if (j % (a%10)) f = false;
        a/=10;
    }
    return f;
}
int main()
{
    start
    range
    {
        cin >> n;
        while (!nq(n)){n++;}
        cout << n << endl;
    }
}
