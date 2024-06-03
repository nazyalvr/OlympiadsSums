#include <bits/stdc++.h>

using namespace std;
int n, i, j, xpos, ypos, errorcode,  a[21][21];
string s;
int main ()
{
    cin >> n;
    cin.ignore(1);
    getline (cin, s);
    for (i = 1; i <= n; ++i)
        for (j = 1;j <= n; ++j) a[i][j] = (i-1)* n + j;
    a[n][n] = 0;
    xpos = n;
    ypos = n;
    for (i = 0; i < s.length(); ++i )
    {
        switch(s[i])
        {
        case ('U'):
            if(xpos > 1)
                {
                    a[xpos][ypos] = a[xpos - 1][ypos];
                    xpos--;
                    a[xpos][ypos] = 0;
                }
            else errorcode = i + 1;
            break;
        case ('D'):
            if(xpos < n)
                {
                    a[xpos][ypos] = a[xpos + 1][ypos];
                    xpos++;
                    a[xpos][ypos] = 0;
                }
            else errorcode = i + 1;
            break;
        case('L'):
            if(ypos > 1)
                {
                    a[xpos][ypos] = a[xpos][ypos - 1];
                    ypos--;
                    a[xpos][ypos] = 0;
                }
            else errorcode = i + 1;
            break;
        case ('R'):
            if(ypos < n)
                {
                    a[xpos][ypos] = a[xpos][ypos + 1];
                    ypos++;
                    a[xpos][ypos] = 0;
                }
            else errorcode = i + 1;
            break;
        }
        if (errorcode) break;
    }
    if (errorcode){cout << "ERROR " << errorcode;}
    else
        {
            for (i = 1; i <=n; ++i)
                {
                    for(j = 1; j <= n; ++j)
                        {
                            cout << a[i][j]<< ' ';
                        }
                    cout << '\n';
                }
        }
}
