#import "bits/stdc++.h"
int64_t n;
main()
{
    std::cin>>n;
    n = pow(3, n/3 - n%3%2) * pow(2, n%3&&1+1);
    std::cout<< n;
}
