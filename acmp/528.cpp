#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long sum = n, q = 3;
    for (int i = 1; i < k; ++i)
    {
        sum += n * (i + 1);
        sum -= q;
        q += 2;
    }
    cout << sum;
}
