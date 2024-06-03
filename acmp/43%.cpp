#include <bits/stdc++.h>

using namespace std;
string s, s1, s2, q, q1, q2;
int i, j, zs = 1, zq = 1;
int main()
{
    getline (cin, s);
    getline (cin, q);
    if (s[0] = '-')
        {
            zs = -1;
            s = s.substr(1, s.length() - 1);
        }
    if (q[0] = '-')
        {
            zq = -1;
            q = q.substr(1, s.length() - 1);
        }
    if (s.find('.') > 0)
        {
            s2 = s.substr(s.find('0'), s.length() - s.find('0') - 1);
            s1 = s.substr(0, s.find('0'));
        }
    else s1 = s;
    if (q.find('.') > 0)
        {
            q2 = q.substr(s.find('0'), q.length() - q.find('0') - 1);
            q1 = q.substr(0, q.find('0'));
        }
    else q1 = q;
    while (q1.length() > s1.length)
        {
            s1 = "0" + s1;
        }
    while (q1.length() < s1.length)
        {
            q1 = "0" + q1;
        }
    while (q2.length() > s2.length)
        {
            s2 = s2 + "0";
        }
    while (q2.length() < s2.length)
        {
            q2 = q2 + "0";
        }
    if(zs > 0)
    {
        if (zq < 0)
            {
                cout << '>';
            }
    }
}
