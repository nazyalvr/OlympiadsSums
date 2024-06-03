#include <bits/stdc++.h>

using namespace std;

char j1, j2;
int i1, i2, i, j, a[8][8];

main()
{
    cin >> j1 >> i1 >> j2 >> i2;
    j1 -= 'a';
    j2 -= 'a';
    i1--;
    i2--;
    a[i1][j1] = 1;
    for(i = i1 + 1; i < 8; ++i)
        for(j = 0; j < 8; ++j)
            if((j && a[i - 1][j - 1]) || (j < 7 && a[i - 1][j + 1]) ) a[i][j] = 1;
    if(a[i2][j2])
        cout<<"YES";
    else
        cout<<"NO";
}
