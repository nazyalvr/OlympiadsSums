#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, q=0, h;
char s, l =' ';

int main()
{
    start
    cin>>n;
    cin.ignore(1);
    while(n--)
    {
        cin>>s;
        if (s==l){q++;}
        else l=s;
    }
    cout<<q;
}


