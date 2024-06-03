#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, i;
int a[26];
string s;
int main()
{
    start
    range
    {
        cin >> n;
        cin.ignore(1);
        int q = 1;
        for(int i = 0; i < 26; ++i)
        {
            a[i]=0;
        }
        for(int i = 0;i<n;++i)
        {
            getline (cin,s);
            for(int j = 0 ; j < s.length(); ++j)
                {
                    a[s[j] - 97] ++;
                }
        }
        for(int i = 0 ; i < 26 ; ++i)
        {
            if (a[i] % n) {q =0;}
        }
        if(q) cout << "YES"<<'\n';
        else cout << "NO" << '\n';
   }
}

