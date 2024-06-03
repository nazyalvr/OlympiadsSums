#include <bits/stdc++.h>

using namespace std;

int i, k, m;
vector <int> a;
int main()
{
    cin >> k >> m;
    a.push_back(2);
    a.push_back(3);
    for (i = 5; i <= m ; i += 2)
    {
        bool f = 1;
        for (const auto j : a)
        {
            if (i % j == 0)
                {
                    f = 0;
                }
        }
        if (f)
            {
                a.push_back(i);
            }
    }
    bool q = 1;
    for (const auto j : a)
        {
            if (j >= k && j <= m)
                {
                    q = 0;
                    cout << j << endl;
                }
        }
    if (q) cout << "Absent";
}
