#include <bits/stdc++.h>
int i,j,n;
main(){
for (std::cin>>n;i<n;)if (std::__gcd(i++,n)<2) j++;
if(n==1)j--;
std::cout<<j;
}
