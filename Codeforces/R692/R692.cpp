#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i,a,b) for(ll i = (a); i < (b); i++)
using namespace std;

int n, i, a, b;
string s;

int main()
{
    start
    range
    {
       cin >> n;
       int a = n%10;
       int sum = 10 * (a - 1);
       int f = 1;
       while (n)
        {
            n/=10;
            sum += f++;
        }
        cout << sum << endl;
    }
}
