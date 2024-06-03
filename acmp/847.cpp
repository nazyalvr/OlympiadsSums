#import <bits/stdc++.h>

using namespace std;

main()
{
    set <char> a;
    string s, q;
    bool f = 1;
    cin >> s >> q;
    if (s.length() != q.length()) f = 0;
    else {
        for (int i = 0; i < s.length(); i++)
        {
            a.insert(s[i]);
        }
    for (int i = 0; i < s.length(); i++)
        {
        a.erase(q[i]);
        }
    if (!a.empty()) f = 0;
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == q[i]) f = 0;
        }
    }
    }
    if (f) cout << "YES";
    else cout << "NO";
}
