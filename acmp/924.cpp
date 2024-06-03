#import <iostream>
using namespace std;
int p, i, j, b[16], q, l, g;
char c;
main()
{
    for(;l<4;++l, cin>>c)
    for (p=0;p<4;++p) {cin >>c ; if(c-87) b[q++] = 0; else b[q++] = 1;}
    for(;i<3;++i)
        for(j=0;j<3;++j)
        if ((b[4*i+j]&b[4*i+j+1]&&b[4*(i+1) + j]&& b[4*(i+1)+ j + 1]) | !(b[4*i+j]|b[4*i+j+1]|b[4*(i+1) + j]| b[4*(i+1)+1+j])) g = 1;
    if(!g) cout<<"Yes"; else cout << "No";
}
