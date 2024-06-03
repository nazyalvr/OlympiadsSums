#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i = 0, m, n, j = 0, f = 1, up = -1, down = 0, left = 100, right = 0;
    string s;
    char a[100][100];
    cin >> m >> n;
    cin.ignore(1);
    for (i = 0; i < m; ++i){
        getline(cin, s);
        for (j = 0; j < n; ++j)
        {
            if (s[j] == '*')
            {
                down = i;
                if (f)
                {
                    up = i; f = 0;
                }
                if (j < left)
                {
                    left = j;
                }
                if (j > right)
                {
                    right = j;
                }
            }
            a[i][j] = s[j];
        }
    }
    if (up < 0)
    {
        for(i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                cout << '.';
            }
            cout << endl;
        }
    }
    else
    {
        for (i = 0; i < up; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    cout << '.';
                }
                cout << endl;
            }
        for (i = up; i <= down; ++i)
            {
                for (j = 0; j < left; ++j)
                {
                    cout << '.';
                }
                for (; j <= right; ++j)
                {
                    cout << '*';
                }
                for (; j < n; ++j)
                {
                    cout << '.';
                }
                cout << endl;
            }
        for (; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                cout << '.';
            }
            cout << endl;
        }
    }
}
