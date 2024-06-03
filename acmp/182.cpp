#import <bits/stdc++.h>
using namespace std;
int j, i, n, a[30000];
main()
{
    for (cin >> n; i < n;)
    {
        cin>>a[i++];
    }
    sort(a, a + n);
    for (j = 0; j < n; j += 2)
    {
        cout << a[j] << ' s';
    }
    for(; --i>0; --i)
    {
        cout << a[i - n % 2] << ' ';
    }
}
