#import <iostream>
int n,i,f,j;
main(){
    std::cin>>n;
    if (n==4) {std::cout<<2<<' '<<2; return 0;}
    for(i=3;2*i<=n;i+=2){
            f=0;
        for (j=2;j*j<=i;j++)
            if(!(i%j)) f=1;
        for (j=2;j*j<=n-i;j++)
            if(!((n-i)%j)) f=1;
    if (!f) {std::cout<<i<<' '<<n-i; return 0;}
    }
}
