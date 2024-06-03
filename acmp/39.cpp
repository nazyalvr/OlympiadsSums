#import <iostream>
using namespace std;
int n, i, a[100], s, m;
main ()
{
    for (cin >> n;i < n;) cin >> a[i++];
    for(; i > 0;) m = max(m, a[--i]), s += m;
    cout << s;
}
