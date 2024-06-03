#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, g, h;
string s;

int main()
{
    start
    vector<char> q;
    getline (cin, s);
    for (int i = 0; i< s.length(); ++i)
        {
            if(s[i]!='+') q.push_back(s[i]);
        }
    sort(q.begin(), q.end());
    s="";
    for(auto i:q)
        {
            s+=i;
            s+='+';
        }
    s=s.substr(0, s.length()-1);
    cout<<s;
}

