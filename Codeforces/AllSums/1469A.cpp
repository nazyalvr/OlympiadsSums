#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; cin.ignore(1); while(t--)

using namespace std;

int n, k, q;
string s;

int main()
{
    start
    range
    {
        k = 0;
        getline(cin, s);
        bool f = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[0] == ')' || s[s.length() - 1] == '(') f = 0;
            else if (s[i] == '?') k++;
        }
        if (k%2) f = 0;
        if (f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}



