#import <bits/stdc++.h>
int n, a, h = 2, g;
main()
{
    for (std::cin >> n; n--; h = 2, g = 0)
    {
        std::cin >> a;
        while (h*h <= a)
            if(pow(h, int(double(log(a)) / double(log(h++))))== a) g = 1;
        std::cout << (g ? "YES" : "NO") << '\n';
    }
}
