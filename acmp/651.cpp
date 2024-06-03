#include <bits/stdc++.h>

using namespace std;

int main ()
{
    long long n, m, k, g, r, sum = 0;
    cin >> n >> m;
    r = __gcd(n,m);
    k = n / r;
    g = m / r;
    for (int i = 2; i <= sqrt(k); i++)
    {
        while (k % i == 0)
        {
            sum++;
            k /= i;
        }
    }
if (k!= 1) sum ++;
for (long long i = 2; i <= sqrt(g); i++)
    {
        while (g % i == 0)
        {
            sum++;
            g /= i;
        }
    }
if (g != 1) sum ++;
cout << sum;
}
