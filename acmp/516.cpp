#include <bits/stdc++.h>

using namespace std;
int transform1 (int n)
{
    vector <int> a;
    while (n > 0)
    {
        a.push_back(n%10);
        n/=10;
    }
    sort(a.begin(), a.end());
    int t = a.size();
    for (int i = 0; i < t; i++)
    {
        n += pow(10, t - i - 1) * a[i];
    }
    return n;
}

int transform2 (int n)
{
    vector <int> a;
    while (n > 0)
    {
        a.push_back(n%10);
        n/=10;
    }
    sort(a.begin(), a.end());
    int t = a.size();
    for (int i = t - 1; i >= 0; i--)
    {
        n += pow(10, i) * a[i];
    }
    return n;
}
bool is_simple (int n)
{
    bool f = true;
    if (!(n%2)) return false;
    else for (int i = 3; i <= (int) sqrt(n); i+=2)
    {
        if (!(n%i)) {f = false; break;}
    }
    return f;
}
int main()
{
    int n;
    cin >> n;
    if (is_simple(transform1(n)) && is_simple(transform2(n))) cout << "Yes";
    else cout << "No";
}
