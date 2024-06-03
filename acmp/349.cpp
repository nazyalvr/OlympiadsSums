#include <bits/stdc++.h>
#ifndef ll
#define ll long long
#endif // ll
using namespace std;

ll i, k, m;
vector <ll> a;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> k >> m;
    a.push_back(2);
    bool q = 1;
    if (k == 2)
    {
        q = 0;
        cout << 2 << '\n';
    }
    for (i = 3; i <= m ; i += 2)
    {
        bool f = 1;
        for (const auto j : a)
        {
            if (j > sqrt(i)) break;
            if (i % j == 0)
                {
                    f = 0;
                    break;
                }
        }
        if (f)
            {
                a.push_back(i);
                if (i >= k)
                {
                    cout << i << '\n';
                    q = 0;
                }
            }
    }
    if (q) cout << "Absent";
}
