#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int a,b, q;
string s;

int main()
{
    start
    cin >> a >> b;
    while(a <= b)
        {
            a*=3;
            b*=2;
            q++;
        }
    cout<<q;
}





