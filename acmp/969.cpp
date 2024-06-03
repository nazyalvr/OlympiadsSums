#import <iostream>
int n, m, x = 2;
main()
{
for(std::cin >> n >> m;n--;) x*=x%=m;
std::cout<<x % m;
}
