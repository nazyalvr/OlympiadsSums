#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, k, q;
string s;
int a[51];

int main()
{
    start
    cin >> n;
    cin.ignore(1);
    int x = 0;
    while(n--)
    {
        getline(cin, s);
        if (s[0] =='+' || s[2] == '+') ++x;
        if (s[0] =='-' || s[2] == '-') --x;
    }

    cout << x;
}




