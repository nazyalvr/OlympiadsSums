#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a = 0;
    string q, s;
    cin >> q >> s;
    int n = q.size();
    int m = s.size();
    for (int i = 0; i < n; ++i)
    {
        a += (q[i] - '0') * pow(3, n-i-1);
    }
        for (int i = 0; i < m; ++i)
    {
        a += (s[i] - '0') * pow(3, m-i-1);
    }
    cout << a;
}
