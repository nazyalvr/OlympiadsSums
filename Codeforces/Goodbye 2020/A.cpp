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

int n, i, a, b;
string s;

int main()
{
    start
    range
    {
        set<double> s;
        cin >> n;
        int a[n], k = 0;
        bool b[100];
        filar(a,0);
        filar(b,0);
        forra(i,0,n)
        {
            cin >> a[i];
            forra (j,0,i)
            {
                if (abs(a[j] - a[i]) > 0 && b[abs(a[j] - a[i])] == 0) {k++; b[abs(a[j] - a[i])] = 1;}
            }

        }
        cout << k << endl;
    }
}
