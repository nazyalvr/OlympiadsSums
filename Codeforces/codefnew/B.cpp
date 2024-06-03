#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i,a,b) for(ll i = (a); i < (b); i++)
using namespace std;

ll n, a;
ll sum1, sum;
string s;

int main()
{
    start
    range
    {
        cin >> n;
        int f = 1;
        sum = 0;
        sum1=0;
        forra(i, 0, n)
        {
            cin >> a;
            if (a && f)
            {
                f = 0;
            }
            else if (!a && !f) {sum1++;}
            else if (!f){sum += sum1; sum1=0;}
        }
        cout << sum << endl;
    }
}
