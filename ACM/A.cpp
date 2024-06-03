#include<bits/stdc++.h>

using namespace std;

int a, b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> a;
    cout << ((a%5 >= 3) ? (5-(a%5)) : a%5);
}
