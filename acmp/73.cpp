#include <bits/stdc++.h>

using namespace std;
string s;
int value;
int main()
{
cin >> s;
for (int i = 0; i < s.size();++i)
{
    int pos = i + 1;
    if (s[i] - '0' < 10)
    {
        value = s[i] - '0' - pos;

    }
    else value = s[i] - 'A' - pos + 10;
    while (value <0) value += 27;
    if (!value) cout <<' ';
    else cout << char(value + 96);
}
}
