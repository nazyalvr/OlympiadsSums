#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, f, t;
    double sum = 0, a, b;
    cin >> t;
    while(t--)
    {
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> f;
        if (f)
        cin >> a;
        else
        {
            cin >> a;
            cin.ignore(1);
            cin >> b;
            a /= b;
        }
        sum += a;
    }
    cout << sum;
    }
}
