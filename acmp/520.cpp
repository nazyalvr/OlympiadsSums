#include <iostream>
int k,l,n;
main() {
std::cin>>n;
k=n/144;
n%=144;
if (n>133) k++, n=0;
else {l=n/12; n%=12; if (n>9) l++, n=0;}
std::cout<<k<<' '<<l<<' '<<n;
}
