#include <bits/stdc++.h>


#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, i, a[100000], l, m;
double time1;

struct A
{
    int u, v, d;

    A()
    {
        u = 0;
        v = 0;
        d = 0;
    }
    A(const int& x, const int& y, const int& z)
    {
        u = x;
        v = y;
        d = z;
    }
};

bool operator< (const A& x, const A& y)
{
    return x.d < y.d;
}

int main()
{
    start
    cin >> n >> m;
    int x, y , z, a[n], c[n];
    vector<A> b;
    fill(a, a + n, 0);
    fill(c, c + n, 0);
    for (int i = 0; i < m; ++i)
        {
            cin >> x >> y >> z;
            ++a[x - 1];
            ++c[y - 1];
            A q = A(x - 1, y - 1, z);
            b.push_back(q);
        }
    sort (b.begin(), b.end());
    int i = m - 1;
    int t = 1, f = 1, l = - 1;
    for (int j = 0; j < n; ++j) {if (a[j] == 0 || c[j] == 0) {cout << -1 ; t = 0; break;}}
    if(t){
    while (f)
        {

            if (a[b[i].u] > 1 && c[b[i].v] > 1) {c[b[i].v]--; a[b[i].u]--;}
            else{ f = 0; cout << b[i].d;}
            i--;
        }

    }
}
