#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, g, h;

int main()
{
    start
    for (int i = 0; i < 5; ++i)
        for(int j = 0; j < 5; ++j)
        {
            cin >> n;
            if (n) g = i, h = j;
        }
    cout << abs(g - 2) + abs(h - 2);
}
