#include <iostream>
char a[100][100],b[100][100],c[4];
int i,j,w,h;
using namespace std;
int main(){
cin>>w>>h;
for (i=0;i<h;i++){
        for(j=0;j<w;j++){
            cin>>a[i][j];
        }
}
for (i=0;i<h;i++){
        for(j=0;j<w;j++){
            cin>>b[i][j];
        }
}
cin>>c[0]>>c[1]>>c[2]>>c[3];
for (i=0;i<h;i++){
    for (j=0;j<w;j++){
        if ((a[i][j]=='1')&&(b[i][j]=='1')){
            a[i][j]=c[3];
        }
        else
        if ((a[i][j]=='1')&&(b[i][j])=='0'){
            a[i][j]=c[2];
        }
        else
        if ((a[i][j]=='0')&&(b[i][j]=='1')){
            a[i][j]=c[1];
        }
        else
        if ((a[i][j]=='0')&&(b[i][j]=='0')){
            a[i][j]=c[0];
        }
    }
}
for (i=0;i<h;i++){
    for (j=0;j<w;j++){
       cout<<a[i][j];
    }
    cout<<endl;
    }
}
