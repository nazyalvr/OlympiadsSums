#include <iostream>

int main(){
char q,w,e,r;
int t;
std::cin>>q>>w>>e>>r>>r;
if (q>99)
    if(w>44) t=r+e-96;
    else t=r-e;
else if (e>99)
           if (w>44) t=q-r;
           else t=r-q;
     else if (w>44) t=q-e;
           else t=q+e-96;
std::cout<<t;
}
