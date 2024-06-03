#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,s=0,q=0;
    char k;
    cin>>n;
    int a[n][3];
    double b[n];
    for (i=0;i<n;i++){
        cin>>k>>a[i][1];
        s+=a[i][1];
        if (k=='-'){
            a[i][0]=-1;
        }
        else{ a[i][0]=1;}
    }
    for(i=0;i<n;i++){
        b[i]=100.0*a[i][1]/s;
        if(int(b[i])!=b[i]){
            if (a[i][0]==1){
                a[i][2]=int(b[i])+1;
            }
            else{a[i][2]=int(b[i]);
            }
            q+=a[i][2];
        }
        else {a[i][2]=int(b[i]);
        q+=a[i][2];
        }
    }
    if (q<100){
            i=0;
        while ((q!=100)&&(i<n)){
                if ((a[i][0]==-1)&&(b[i]!=a[i][2])){
                    a[i][2]++;
                    q++;
                }
            i++;
        }
    }
    if (q>100){
            i=0;
        while ((q!=100)&&(i<n)){
                if (a[i][0]&(b[i]!=a[i][2]))
                    a[i][2]--, q--;
        i++;
        }
    }
for (i=0;i<n;i++){
    cout<<a[i][2]<<endl;
}
    return 0;
}
