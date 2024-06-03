#import <bits/stdc++.h>

using namespace std;

int n, x, i, j;
string s;
main()
{
    for(cin >> n; i++ < n;)
    {
        for( cin >> s, j = 0, x = 0; j < s.size();)
            x = (x * 2 + s[j++] + 1) % 7;
        if(x) cout << "No\n";
        else cout << "Yes\n";
    }
}
