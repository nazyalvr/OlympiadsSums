#include <bits/stdc++.h>

using namespace std;

int n, m, r, b, l;
int main()
{
     cin >> n >> m >> l;
     int a[n+2][m+2];
     memset(a, 0, sizeof(a));
     for (int i = 0; i < l; ++i)
     {
         cin >> r >> b;
         a[r][b] = -1;
         if (a[r-1][b-1] != -1) a[r-1][b-1]++;
         if (a[r][b-1] != -1) a[r][b-1]++;
         if (a[r-1][b] != -1) a[r-1][b]++;
         if (a[r-1][b+1] != -1) a[r-1][b+1]++;
         if (a[r+1][b-1] != -1) a[r+1][b-1]++;
         if (a[r][b+1] != -1) a[r][b+1]++;
         if (a[r+1][b] != -1) a[r+1][b]++;
         if (a[r+1][b+1] != -1) a[r+1][b+1]++;
     }
     for (int i = 1; i <= n;++i)
     {
         for (int j = 1; j<=m;++j)
         {
             if (a[i][j] == 0) cout << '.';
             else if (a[i][j] > 0) cout << to_string(a[i][j]);
             else cout << '*';
         }
         if (i != n) cout << '\n';
     }
}
