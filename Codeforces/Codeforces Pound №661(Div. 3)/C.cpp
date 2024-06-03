#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, i, j,c;

int main()
{
    start
    range
    {
        int a[101];
        cin >> n;
        int b[n + 1], l = 0;
        for (i = 0; i <= n; ++i) {b[i]=0;}
        for (i = 0; i <= 100; ++i) {a[i]=0;}
        for (i = 0; i < n; ++i)
            {
                cin >> c;
                b[c]++;
                for (j = 1; j <= n; ++j)
                    {
                        if (b[j]) a[j + c] = 1;
                    }
            }

        for (i = 2; i <= 100 ; ++i)
            {
                if (a[i])
                {
                    int res = 0;
                    for (j = 1; j <= min(i / 2 ,  n); ++j )
                        {
                            if ((i - j <= n) && (b[j])&&(b[i-j]))
                            if (j == i - j) res+=b[j]/2;
                            else
                            res += min(b[j], b[i-j]);
                        }
                        l = max(l, res);
                }
            }
        cout << l <<'\n';
    }
}

