#include <bits/stdc++.h>

using namespace std;

bool comp (int a, int b)
{
    return a > b;
}
int main()
{
    int n, k, t;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end(), comp);
    int j = 0;
    long long s = 0, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += (s+1) * a[i];
        j++;
        if ( j%k == 0 )
        {
            j = 0;
            s++;
        }
    }
    cout << sum;
}
