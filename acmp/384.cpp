#import <bits/stdc++.h>
 int n,k,a,b=1,r = 1e9;
 main()
 {
     for (std::cin>>n>>k, n = std::__gcd(n,k); n--; b%=r)
        b+=a=b-a;
        std::cout<<a;
}
