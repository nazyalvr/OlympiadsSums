#import <iostream>
int64_t f, i, n, m, a[8] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};

main()
{    for(std::cin >> n >> m; i < 8;++i) if (a[i]>=n&a[i]<=m) {f = 1; std::cout<< a[i] << '\n';}
    if(!f) std::cout << "Absent";
}
