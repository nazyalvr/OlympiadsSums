#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, b, ma = -1, q, w, e;
    cin >> n >> m;
    int a[n + 1][2];
    vector <int> res;
    vector <int> st;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i][0] >> a[i][1] >> b;
        if (a[i][1] > ma) {ma = a[i][1];}
        if (a[i][1] > 0) st.push_back(a[i][1]);
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> q >> w >> e;
        if (w > 0) res.push_back(q);
    }
    if (st.size() != 0)
    {
        if (st.size() == 1)
            {
                int j = 0;
                while (a[j][1] == 0) j++;
                res.push_back(a[j][0]);
            }
            else
            {
                sort(st.begin(), st.end());
                int r = int(st.size() / 2) + 1;
                int mediana = st[r];
                for (int i = 0; i < n; ++i)
                {
                    if((a[i][1] == ma) || a[i][1] > mediana) res.push_back(a[i][0]);
                }
            }
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i)
    {
        cout << res[i] << ' ';
    }
    return 0;
}
