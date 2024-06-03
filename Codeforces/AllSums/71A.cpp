#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; cin.ignore(1); while(t--)

using namespace std;

string s;
int n;

int main()
{
    start
    range
    {
        getline(cin, s);
        if (s.length()>10) cout<< s[0] << s.length()-2 << s[s.length()-1]<<'\n';
        else cout << s<<'\n';       }
}

