#include <iostream>
using namespace std;
main(){
int n, i, j, k, q;
cin>>n;
int a[n*n][n*n], b[n*n+1];
for (i=0; i<n*n; i++){
        for (k=0;k<=n*n;k++)
            b[k]=0;
    for (j=0; j<n*n;j++){
        cin>>a[i][j];
        if (a[i][j]>n*n||a[i][j]<1) {cout<<"Incorrect"; return 0;}
        if (b[a[i][j]]) {cout<<"Incorrect"; return 0;}
        b[a[i][j]]++;
        }
}
for (i=0; i<n*n; i++){
        for (k=0;k<=n*n;k++)
            b[k]=0;
    for (j=0; j<n*n;j++){
        if (b[a[j][i]]) {cout<<"Incorrect"; return 0;}
        b[a[j][i]]++;
        }
}
for (i=0; i<n; i++){
    for (j=0; j<n; j++){
        for (k=0;k<=n*n;k++){
            b[k]=0;
        }
        for(k=0;k<n;k++){
            for(q=0;q<n;q++){
                if (b[a[i*n+k][j*n+q]]) {cout<<"Incorrect"; return 0;}
                b[a[i*n+k][j*n+q]]++;
            }
        }

    }
}
cout<<"Correct";
return 0;
}
