#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n;

int main()
{
    start
    range
    {
        cin >> n;
        if (n==36) cout << "YES"<< '\n'<< 6 << ' ' << 10<< ' ' << 15<< ' ' << n-31 << '\n';
        else if (n == 40 ) cout <<  "YES"<< '\n'<<6 << ' '<< 10<< ' ' << 15<< ' ' << n-31 << '\n';
        else if (n == 44) cout << "YES"<< '\n'<<6 << ' '<< 10<< ' ' << 15<< ' ' << n-31 << '\n';
        else
        if (n >30) cout << "YES"<< '\n'<<6 << ' '<< 10<< ' ' << 14<< ' ' << n-30 << '\n';
            else cout<< "NO"<<'\n';
    }
}
