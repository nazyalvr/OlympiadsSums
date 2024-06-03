#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t1, t2, s1, s2, s, full;
    double v1, time;
    cin >> t1 >> t2 >> s1 >> s2 >> s;
    v1 = 1. * s1 / t1;
    if (s1 >= s)
    {
        cout << fixed << setprecision(2) <<  1. * s / v1;
    }
    else if (s1 <= s2)
    {
        cout << "NO";
    }
    else
    {
        full = (s - s1) / (s1 - s2);
        if ((s - s1) % (s1 - s2) != 0)
        {
            full += 1;
        }
        time = 1. * full * (t1 + t2) + (s - full * (s1 - s2)) / v1;
        cout << fixed << setprecision(2) << time;
    }
}
