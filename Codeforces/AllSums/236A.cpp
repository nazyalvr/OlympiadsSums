#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, q=0, h, a[50];
string s;

int main()
{
    start
    cin>>s;
    for(int i=0; i< s.length();++i)
    {
        if (!a[s[i]-97]) a[s[i]-97]++, q++;
    }
    if(q%2) cout<< "IGNORE HIM!";
        else cout << "CHAT WITH HER!";
}



