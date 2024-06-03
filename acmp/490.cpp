#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d1, m1, y1;
    string s, q;
    getline(cin,s);
    d1 = 10 * (s[0] - '0') + (s[1] - '0') - 1;
    m1 = 10 * (s[3] - '0') + (s[4] -'0') - 1;
    y1 = 1000 * (s[6] - '0') + 100 * (s[7] - '0') + 10 * (s[8] - '0') + (s[9] - '0') + 101;
    tm date1 = {0, 0, 0, d1, m1, y1};
    getline(cin, q);
    d1 = 10 * (q[0] - '0') + (q[1] - '0') - 1;
    m1 = 10 * (q[3] - '0') + (q[4] - '0') - 1;
    y1 = 1000 * (q[6] - '0') + 100 * (q[7] - '0') + 10 * (q[8] - '0') + (q[9] - '0') + 101;
    tm date2 = {0, 0, 0, d1, m1, y1};
    long long a = mktime(&date1);
    long long b = mktime(&date2);
    long long rez = (b - a) / (60*60*24);
    cout << rez ;
}
