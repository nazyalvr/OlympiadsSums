#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i,a,b) for(ll i = (a); i < (b); i++)
using namespace std;

ll n, a;
ll sum1, sum;
string s;

int main()
{
    start
    range
    {
        sum = 0;
        cin >> n;
        cin.ignore(1);
        getline(cin, s);
        cout << s << '\n';
        char prev = s[0];
        forra (i, 1, n)
        {
            if (s[i] != prev)
                {
                    prev = (prev == '1' ? '0' : '1');
                }
            else
            {
                int j;
                bool f = 1;
                if (prev == '1') j = s.find("00"); else j = s.find("11");
                if (j < 0) j = n - 1;
                auto it = std::next(s.begin(), i);
                auto it1 = std::next(s.begin(), j);
                string s1 = s.copy(it, it1);
                reverse(s1.begin(), s1.end());
                s.replace(i, j - i + 1, s1);
                cout << s << '\n';
                sum++;
            }
        }
        cout << sum << '\n';
    }
}
