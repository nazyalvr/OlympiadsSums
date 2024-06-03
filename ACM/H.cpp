#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    long double a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    long double m = 0, c = 0;
    for (int i = 0; i < n - 1 ;i++){
            c = (1. * a[i] * a[i + 1]) / (1. * a[i + 1] - a[i]);
            if (c > m)
            {
            m = c;
            }
    }
    cout << fixed << setprecision(12) << m;
}
