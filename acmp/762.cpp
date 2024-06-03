#include <bits/stdc++.h>

int main()
{
    int a;
    double c;
    std::cin>>a;
    c=log(a)/log(3);
    a=int(c)+1;
    if (int(c)==c) a--;
    std::cout<<a;
}
