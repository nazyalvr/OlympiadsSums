#import <iostream>
#define r std::
int n, m, a, l, j, q, e, f;
main()
{
    r cin >> n;
    while (n--)
    {
        for (l = 0, j = 1, r cin >> a; j++ <= a;)
            if (!(a % j))
            {
                for (f = 1, q = 2; q < j;)
                    if (!(j % q++)) f = 0;
                if (f) ++l;
            }
        if (l >= m) e = m - l ? a : r min(e,a), m = l;
    }
    r cout << e;
}
