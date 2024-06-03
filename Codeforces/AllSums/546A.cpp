#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, k, w;
string s;

int main()
{
    start
    cin >> k >> n >> w;
    if (k*(w*(w+1)/2) - n > 0) cout << k*w*(w+1)/2 - n;
    else cout<<0;
}




