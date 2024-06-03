
#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, i;

int main()
{
    start
    range
    {
        cin >> n;
        int f = 1;
        int a[n];
        for (i = 0 ; i < n; ++i){cin >> a[i];}
        sort(a, a + n);
        for (i = 1; i< n; ++i){
            if (abs(a[i]-a[i-1])>1) f = 0;
        }
        if (f) cout << "YES"<< '\n';
        else cout << "NO"<< '\n';
    }
}
