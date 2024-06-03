#include <bits/stdc++.h>
using namespace std;
int a[755][755], m1[755], m2[755], n;
int i, j, m;

int mn(int i)
{
int res = 1111;
for (int j = 1;j<=m;j++)
if (res > a[i][j])
res = a[i][j];
return res;
}

int mx(int i)
{
int res = -1111;
for (int j = 1;j <= n; j++)
if (res < a[j][i])
res = a[j][i];
return res;
}
main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cin>>n>>m;
int ans = 0;
for (i = 1;i<=n;i++)
for (j = 1;j<=m;j++)
cin>>a[i][j];
for (i = 1; i<=n;i++)
m1[i] = mn(i);
for (j = 1; j <=m;j++)
m2[j] = mx(j);
for (i = 1;i<=n;i++)
for (j = 1;j<=m;j++)
if (a[i][j] == m1[i] && a[i][j] == m2[j])
ans++;
cout<<ans;
}
