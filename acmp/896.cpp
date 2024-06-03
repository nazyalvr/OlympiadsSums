#import <bits/stdc++.h>
int m,n;
main()
{
    std::cin >> n >> m;
    std::cout<< n + m- std::__gcd(n,m);
}
