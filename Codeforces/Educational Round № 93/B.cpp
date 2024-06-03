#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; cin.ignore(1); while(t--)

using namespace std;

int n, l;
string s;
int main()
{
    start
    range
    {
       getline(cin, s);
       int q = 0, a[100], l = 0;
       for(int i = 0; i < 100; ++i)a[i] = 0;
       for(int i = 0; i < s.length(); ++i)
       {
            if(s[i] == '1')
            {
                l++;
            }
            else
                    if(l){
                    a[q] = l;
                    l = 0;
                    q++;
                    }
       }
       if(l) { a[q] = l; l = 0; q++;}
       sort(a, a + 100);
       int f = 1, sum = 0;
       for(int i = 99; i >= 0; --i)
        {
            if (f)
            {
                sum += a[i]; f=0;
            }
            else f = 1;
       }
        cout<< sum << '\n';
    }
}

