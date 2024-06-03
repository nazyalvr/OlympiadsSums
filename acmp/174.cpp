#import <bits/stdc++.h>
using namespace std;
int n, i,j;
float q , a[50];
main ()
{
    for (cin >> n;i < n;) cin >> a[i++];
    for (sort(a, a + n), cin >> q; j < n;++j) if (a[j] > q) q += a[j], q /= 2;
    cout << fixed << setprecision(6) << q;
}
