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
       cin >> b;
       cin.ignore(1);
       cin >> s;
       a = 0;
       int l = 0;
       forrd(i, b - 1, 0)
       {
           if (s[i] ==')') l++;
           else {a = l; l = 0; break;}
       }
       if (l!=0) {a=l; l =0;}
       if (2 * a > b) cout << "Yes" << endl;
       else cout << "No" << endl;
    }
}
