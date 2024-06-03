#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, a, q, h;
int b[1000];

int main()
{
    start
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        h = 0;
        for(int j = 0; j < 3; j++)
            {
                cin >> a;

                if (a)
                    {
                        h++;
                    }
            }
        if(h > 1) q++;
    }
    cout << q;
}

