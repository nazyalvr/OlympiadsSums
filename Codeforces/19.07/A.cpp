#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int l, n, i, o = -1, y, g, h, f, x, v, w;
string s, q;

int main()
{
    start
    cin >> l;
    for (;i < l;++i)
    {
        o = -1;
        v = 0;
        cin >> n;
        cin >> s;
        q = s;
        for (int j = 0; j <= n - 7; ++j)
        {
            if (s[j] == 'a' || s[j] == '?')
            {
                s[j] = 'a';
                if (s[j + 1] == 'b' || s[j+1] == '?')
                {
                    s[j + 1] = 'b';
                    if (s[j + 2] == 'a' || s[j + 2] == '?')
                    {
                        s[j + 2] = 'a';
                        if (s[j + 3] == 'c' || s[j + 3] == '?')
                        {
                            s[j + 3] = 'c';
                            if (s[j + 4] == 'a' || s[j + 4] == '?')
                            {
                                s[j + 4] = 'a';
                                if (s[j + 5] == 'b' || s[j + 5] == '?')
                                {
                                    s[j + 5] = 'b';
                                    if (s[j + 6] == 'a' || s[j + 6] == '?')
                                    {
                                        s[j + 6] = 'a';
                                        o = j;
                                        for (h = 0; h < n; ++h)
                                            {
                                                if (q[h] == '?' && (h < o || h > o + 6)) s[h] = 'd';
                                            }
                                        y = 0;
                                        for (h = 0; h <= n - 7; ++h )
                                        {
                                            if  ((s[h] == 'a')&&(s[h + 1] == 'b')&&(s[h + 2] == 'a')&&(s[h + 3]== 'c')&&(s[h+4] == 'a')&&(s[h+5]=='b')&&(s[h+6]=='a'))
                                                ++y;
                                        }
                                        if (y > 2)
                                        {
                                            w = 0;
                                            for (h = 0; h < n - 6; ++h)
                                                {
                                                    if  ((q[h] == 'a')&&(q[h + 1] == 'b')&&(q[h + 2] == 'a')&&(q[h + 3]== 'c')&&(q[h+4] == 'a')&&(q[h+5]=='b')&&(q[h+6]=='a'))
                                                        ++w;
                                                }
                                            if (w > 2 && !v) {cout << "No" << '\n'; v = 1;}
                                            else if (w == 1) {for (h=0; h < n; ++h) if (q[h] == '?') s[h] == 'd'; if(!v) {cout<< "Yes" << '\n' << s << '\n'; v=1;}
                                        }
                                        else if (!v) {cout << "No" << '\n'; v=1;}
                                        }
                                            else
                                            {
                                                if (y == 1) {if (!v) cout << "Yes" << '\n' << s << '\n'; v = 1;}
                                                else
                                                {
                                                    for (h = 0; h <= n - 7; ++h )
                                                    {
                                                        if  ((s[h] == 'a')&&(s[h + 1] == 'b')&&(s[h + 2] == 'a')&&(s[h + 3]== 'c')&&(s[h+4] == 'a')&&(s[h+5]=='b')&&(s[h+6]=='a'))
                                                            if (o != h){x = h;}
                                                    }
                                                    g = 0;
                                                    for (int r = o; r < o + 7; ++r) if (q[r] == '?' && (r < x || r > x + 6)) {s[r] = 'd'; g = 1;}
                                                    if (g)
                                                    {
                                                        if(!v){
                                                        cout << "Yes" << '\n' << s << '\n';
                                                        v = 1;
                                                        }
                                                    }
                                                    else { if (!v) cout << "No" << '\n'; v = 1;}
                                                }
                                            }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (!v) cout << "No" << '\n';
    }

}
