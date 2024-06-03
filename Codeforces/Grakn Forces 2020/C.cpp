#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;


int main()
{
    start
    range{
        int n, i, a[100],b[100],c[100],p[100],prev;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
     for(i=0;i<n;i++){
        cin>>c[i];
     }
     p[0]=a[0];
     prev=a[0];
     for(i=1;i<n-1;i++){
            if(a[i] != prev)
            {
                    p[i]=a[i];
                    prev=a[i];
            }
            else
            if(b[i]!=prev){
                p[i]=b[i];
                prev=b[i];
            }
            else
            if(c[i]!=prev){
                    p[i]=c[i];
                    prev=c[i];
                }
     }
        if(a[n-1]!=prev && a[n-1]!=a[0]){
            p[n-1]=a[n-1];
        }
        else{
            if(b[n-1]!=prev && b[n-1]!=a[0]){
                p[n-1]=b[n-1];
            }
            else{
                p[n-1]=c[n-1];
            }
        }
        for(int i = 0; i < n; ++i){cout << p[i] << ' ';}
        cout <<'\n';
     }

    }
