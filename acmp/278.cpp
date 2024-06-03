#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    int j = 0, f = 1;
    cin >> s >> t;
    for (int i = 0; i < s.length(); ++i)
    {
        while (t[j] != s[i] && j < t.length()) j++;
        j++;
        if (j > t.length() && i != s.length()) {f = 0; break;}
    }
    if (f) cout << "YES";
    else cout << "NO";
}
