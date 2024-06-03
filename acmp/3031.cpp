#include <iostream>

std::string s;
int i,r=-99,n,j,h;

main()
{
    for (std::cin >> s;i<s.length();++i)
        for (n=0,h=-1,j=-1;++j<s.length();n>r?r=n:0)
            j-i?n += (s[j]-48) * (h *= -1):0;
    std::cout << r;
}
