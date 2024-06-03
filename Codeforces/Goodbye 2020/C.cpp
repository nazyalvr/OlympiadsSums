#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; cin.ignore(1); while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i,a,b) for(ll i = (a); i < (b); i++)
#define forrd(i,a,b) for(ll i = (a); i >= (b); i--)
using namespace std;

#include <bits/stdc++.h>

using namespace std;
int n;
string s;

char check(int x)
{
    if (x >= 0 && x <= s.length() - 1)
        return s[x];
    else
        return 0;
}

bool wrong(int x)
{
    set<char> b;
    b.insert(check(x-1));
    b.insert(check(x-2));
    if (b.find(s[x]) != b.end())
    {
        s[x] = 'a';
        b.insert(check(x+1));
        b.insert(check(x+2));

        while (b.find(s[x]) != b.end())
        {
            ++s[x];
        }
        return 1;
    }
    return 0;
}

main()
{
    range
    {
        cin >> s;
        int k = 0;
        for (int i = 1; i <= s.length() - 1; ++i)
        {
            if (wrong(i)) k++;
        }
        cout << k << '\n';
    }
}
