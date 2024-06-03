#include <bits/stdc++.h>


#define vll vector<long long>
#define vi vector<int>
#define pb push_back
#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)
bool prost(int a)
{
    if (a == 2) return 1;
    if (!(a%2)) return 0;
    else
    for (int y = 3; y*y <= a; y+=2) if (!(a%y)) return 0;
    return 1;
}
using namespace std;
int main()
{
    start
    for ()
    int a, ma = -1, t;
    vi b;
    map <int, int> q;
    set<int> s;
    cin >> t;
    for (int h = 0; h < t; ++h){
        cin >> a;
        b.pb(a);
        s.insert(a);
        ma = max(ma, a);
    }
    int g = 1;
    q[1] = 1;
    for (int i = 2; i <= ma; ++i)
    {
        if (prost(i)) g++;
        else {int o = int(sqrt(i)); if ((o*o == i)&&(prost(o))) g--;}
        if(s.count(i) > 0) q[i] = g;
    }
    for (int j = 0; j < t; ++j) {cout << q[b[j]] << '\n';}
}
