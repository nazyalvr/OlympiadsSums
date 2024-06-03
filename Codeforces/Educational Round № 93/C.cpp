#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, a, b, c, f;

int main()
{
    start
    range
    {
        cin >> n;
        cin >> a >> b;
        f = n;
        n-=2;
        while(n--)
            {
                cin >> c;
            }
        if (a+b <= c) cout << 1<< ' '<< 2 << ' '<< f << '\n';
        else cout << "-1"<<'\n';
    }

}

