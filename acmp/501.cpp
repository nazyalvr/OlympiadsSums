#include <bits\stdc++.h>
using namespace std;
 int main(){
int a[102][102];
for (int i=0;i<102;i++){
    for (int j=0;j<102;j++){
        a[i][j]=0;
    }
}
int n,x,y,x1,y1,s=0;
cin>>n;
for (int i=0;i<n;i++){
    cin>>x>>y>>x1>>y1;
    if (x>x1){swap(x,x1);}
    if (y>y1){ swap(y,y1);}
    for (int j=x;j<x1;j++){
        for (int k=y;k<y1;k++){
            a[j][k]++;
        }
    }
}
cin>>x>>y>>x1>>y1;
if (x>x1){swap(x,x1);}
if (y>y1){swap(y,y1);}
for (int i=x;i<x1;i++){
    for (int j=y;j<y1;j++){
        s+=a[i][j];
    }
}
cout<<s;
return 0;
 }
