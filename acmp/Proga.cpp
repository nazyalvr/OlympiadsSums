#include <iostream>
using namespace std;
bool Sonia(float a, float b,float c)
{
return (a*c>0&&b*c<0);
}
float q,w,e;
main(){
cin>>q>>w>>e;
cout<<Sonia(q,w,e);
}
