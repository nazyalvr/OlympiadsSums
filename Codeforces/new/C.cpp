#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int t,l ,ma = 200000, f, last;
char i,j ;
string s;

int main()
{
    start
    cin >> t;
    cin.ignore(1);
    while (t--)
    {
        ma = 200000;
        getline(cin,s);
        for (i='0'; i<='9';++i)
        {
            for(j='0';j<='9';++j)
            {
                l=0;
                f=1;
                for(int u = 0; u < s.length();++u)
                    {
                        if(f)
                            {
                                if (s[u] == i)
                                {
                                    f = 0;
                                    last = 1;
                                }
                                else {++l; }
                            }
                        else
                            {
                                if(s[u] == j)
                                {
                                    f=1;
                                    last = 0;
                                }
                                else {++l;}
                            }
                    }
                if(i!=j) l+=last;
                if (l < ma){ma = l;}
            }
        }
        cout<<ma<<'\n';
    }

}

