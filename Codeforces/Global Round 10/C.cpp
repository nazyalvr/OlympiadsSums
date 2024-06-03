#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, a[200000];

int main()
{
    start
    range
    {
        int i = 0;
        ll k=0;
        cin >> n;
        for (i = 0; i < n; ++i) cin >> a[i];
        i = 1;
        while (i < n)
            {
                if(a[i] < a[i-1])
                {
                    int j = i, ma = a[i], l;
                    while (a[j] < a[i-1]&& j < n)
                    {
                        ma = max(ma, a[j]);
                        j++;

                    }
                    k += a[i-1] - ma;
                    for(l = i; l < j; l++)
                        {
                            a[l]+=a[i-1]-ma;
                        }
                }
                else {++i;}

            }
            cout << k << '\n';
    }
}


