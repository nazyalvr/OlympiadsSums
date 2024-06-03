#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int t, n, k, q, z, ma, ka, s, a[100000], last, mas, w, res, e,i,f;

int main()
{
    start
    cin >> t;
    while (t--)
    {
        i = 0;
        cin >> n >> k >> z;
        for (;i < n;) cin >> a[i++];
        s=a[0];
        ma = 0;
        q = 0;
        ka=0;
        mas = 0;
        while (k&&q<n)
        {
            s+=a[++q];
            k--;
            if ((a[q]+a[q-1]>ma)&&z)
            {
                ma = a[q]+a[q-1];
                w = k;
                e = z;
                f = 1;
                res=s;
                while (w && e)
                    {
                        if(f)
                            {
                                f = 0;
                                res+=a[q-1];
                                e--;
                                w--;
                                last = 0;
                            }
                        else
                            {
                                f=1;
                                w--;
                                res+=a[q];
                                last = 1;
                            }
                    }
                    for (int j=last; j < w; ++j)
                            {
                                if(q+j<n) res+=a[q+j];
                            }
                    if(res > mas) mas = res;
            }
        }
        mas = max(s,mas);
        cout<<mas<<'\n';
    }
}
