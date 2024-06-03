#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n;

int main()
{
    start
    range
    {
        int a, b=-1, k = 0, f = 0;
        cin >> n;
        for(int i = 0; i < n; ++i){ cin >> a; ++k; if (a!=b&&b!=-1) f=1; b = a;}
        if(f) cout<<1<<'\n';
        else cout<<k<<'\n';
    }
}

