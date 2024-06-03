#include <bits/stdc++.h>

#define pb push_back

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

#define filar(a, value) memset(a, value, sizeof(a))

#define forra(i, a, b) for(ll i = (a); i < (b); i++)
using namespace std;
ll n, i;
int main()
{
        start
        ll sum = 1;
        cin >> n;
        forra(i, 2, n){sum *= i;}
        cout << sum/(n/2);


}
