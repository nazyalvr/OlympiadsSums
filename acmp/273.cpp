#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int siz = s.length(), k = 0;
    for (int i = 100; i < 1000; ++i)
    {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        int j = 0;
        while ((s[j] - 48 != a) && j < siz)
        {
            j++;
        }
        if (j++ < siz)
        {
            while ((s[j] - 48 != b) && j < siz)
            {
                j++;
            }
            if (j++ < siz)
            {
                while ((s[j] - 48 != c) && j < siz)
                {
                    j++;
                }
                if (j < siz) {k++;}
            }
        }
    }
    cout << k;
}
