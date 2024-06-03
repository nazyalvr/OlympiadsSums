#import <bits/stdc++.h>
#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i,a,b) for(ll i = (a); i < (b); i++)
using namespace std;

int main()
{
    int n, i, m = -1, s = 0;
    cin >> n;
    int a[n][2];
    filar(a,0);
    forra(i,0,n)
    {
        cin >> a[i][0] >> a[i][1];
    }
    forra (i,0,n)
    {
        forra(j,0,n)
        {
            if (a[i][0]*a[j][1] == a[i][1]*a[j][0] && a[i][1]*a[j][0] >=0 && a[i][0]*a[j][1] >= 0) s++;
        }
        if (s>m){m = s;}
        s = 0;
    }
    cout << m;
}
