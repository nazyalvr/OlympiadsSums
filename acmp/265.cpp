#include <iostream>
int i,c,j,n,a[9][9];
main(){
for (std::cin>>n;i<n;i++) std::cin>>j>>c, a[j-1][c-1]++;
n*=4;
for (i=0;i<8;i++) for (j=0;j<8;) if(a[i][j++]) n-=2*(a[i][j]+a[i+1][j-1]);
std::cout<<n;
}
