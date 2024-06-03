#include <bits/stdc++.h>

using namespace std;
string s, s1, s2, q, q1, q2;
int i, j, zs = 1, zq = 1;
int main()
{
    getline (cin, s);
    getline (cin, q);
    if (s[0] == '-')
        {
            zs = -1;
            s = s.substr(1, s.length() - 1);
        }
    if (q[0] == '-')
        {
            zq = -1;
            q = q.substr(1, q.length() - 1);
        }
        i = s.find('.');
        j = q.find('.');
    if (i != -1)
        {
            s2 = s.substr(i + 1, s.length() - i - 1);
            s1 = s.substr(0, i);
        }
    else {s1 = s; s2 = "";}
    if (j != -1)
        {
            q2 = q.substr(j + 1, q.length() - j - 1);
            q1 = q.substr(0, j);
        }
    else  {q1 = q; q2 = ""; }
    while (q1.length() > s1.length())
        {
            s1 = "0" + s1;
        }
    while (q1.length() < s1.length())
        {
            q1 = "0" + q1;
        }
    while (q2.length() > s2.length())
        {
            s2 = s2 + "0";
        }
    while (q2.length() < s2.length())
        {
            q2 = q2 + "0";
        }
    if(zs > 0)
    {
        if (zq < 0)
            {
                cout << '>';
            }
        else
            {
                if (s1 > q1) cout << '>';
                else
                    if (s1 < q1) cout << '<';
                    else
                        if (s2 > q2) cout << '>';
                        else
                            if (s2 < q2) cout << '<';
                            else cout << '=';
            }
    }
    else
        {
            if(zq > 0) cout << '<';
            else
            {
                if (s1 > q1) cout << '<';
                else
                    if (s1 < q1) cout << '>';
                    else
                        if (s2 > q2) cout << '<';
                        else
                            if (s2 < q2) cout << '>';
                            else cout << '=';
            }

        }
}
