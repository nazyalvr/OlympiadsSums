#import <iostream>
int n, k, i, q, l;
main()
{
    std::cin >> n >> k;
    for (i = 2*n; i < 1e9; q = 0, l = ++i)
    {
        while(q < n){
                if (l % n - k) break;
                l -= l / n + k, q++;}
        if (q == n) {std::cout << i; break;}
    }
}
