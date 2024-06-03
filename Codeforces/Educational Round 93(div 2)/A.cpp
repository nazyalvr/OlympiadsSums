#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i,a,b) for(ll i = (a); i < (b); i++)
using namespace std;

int l,r;
string s;

int main()
{
    start
    range
    {
        cin >> l >> r;
        if ((l*4)/3 >= r || ((r+1) / 2 <= l && ((r+1)% 2 == 0)) || (r+1)/2 < l ) cout << "YES" << '\n';
        else cout<< "NO" << '\n';
    }
}
