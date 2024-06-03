#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range ll t; cin >> t; while(t--)

using namespace std;

int n, q;
string s;
int main()
{
    start
    getline (cin ,s);
    int g = s.length();
    vector<char> a;
    for(int i = 0; i < g; ++i)
    {
        a.push_back(s[i]);
    }
    sort(a.begin(), a.end());
    do {
    q++;
    }
    while ( next_permutation(a.begin(), a.end()) );
    cout << q << '\n';
    do {
    for(int i = 0; i < g; ++i){cout << a[i];}
    cout << '\n';
    }
    while ( next_permutation(a.begin(), a.end()) );
}

