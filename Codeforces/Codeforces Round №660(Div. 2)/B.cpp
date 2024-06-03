#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n,i = 0;

int main()
{
    start
    range
    {
        cin >> n;
        for (i = 0; i < 3*n/4;++i){cout << '9';}
        for (; i < n; ++i) cout << '8';
        cout << '\n';
    }
}
