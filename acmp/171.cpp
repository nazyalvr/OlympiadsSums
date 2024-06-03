#import <iostream>
long long n,a[999],i=2;
main(){
std::cin>>n;
for (;i<998;i++)
    while(!(n%i)) n/=i, a[i]++;
while (i) n*=a[i--]+1;
std::cout<<n;
}
