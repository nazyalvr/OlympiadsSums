#import <bits/stdc++.h>

using namespace std;

int main()
{
    string s, q;
    int n, i, k;
    vector<int> res;
    cin >> s;
    int m = s.length();
    cin.ignore(1);
    cin >> n;
    cin.ignore(1);
    for (i = 0; i < n; i++)
    {
        cin >> q;
        cin.ignore(1);
        k = 0;
        for (int j = 0; j < s.length(); j++)
        {
            k += s[j]^q[j];
        }
        if (k < m)
            {
                m = k;
                res.clear();
                res.push_back(i + 1);
            }
        else if (k == m)
            {
                res.push_back(i + 1);
            }
    }
    cout << res.size() << '\n';
    for (i = 0; i < res.size(); i++)
    {
        cout << res[i] << ' ';
    }
}
