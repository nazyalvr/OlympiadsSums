#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i,a,b) for(ll i = (a); i < (b); i++)
#define forrd(i,a,b) for(ll i = (a); i >= (b); i--)
using namespace std;

int n, i, a, b[200010];
string s;

int main()
{
    start
    range
    {
        filar(b, 0);
        int m = 0, k = 0;
        cin >> n;
        forra(i,0,n)
        {
            cin >> a;
            b[a]++;
            if (a > m) {m = a;}
        }
        forrd(i,m + 1,0)
        {
            if (b[i] > 0 && b[i+1] < 1) {b[i+1]++; b[i]--;}
        }
        forra(i,0,m+2) {if (b[i]>0) k++;}
        cout << k << endl;
    }
}

