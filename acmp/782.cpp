#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, q = 0;
    cin >> n;
    if (n < 2) cout << 0;
    else if (n == 2) cout << 1;
    else if (n == 3) cout << 2;
    else {
            while (n > 1)
            {
                n/=2;
                q++;
            }
    }

}
