#import <iostream>
int n, r, i, k, a[99], j, f;
main()
{for (std::cin >> n; i < n; std::cin >> a[i++]);while (k < 10)
    {
        r += a[j];
        if (f)
            {
                if (a[j] + a[j - 1] == 10) r += a[j + 1];
                    k++;
                    f = 0;
            }
        else
            if (a[j] == 10) r += a[j + 1] + a[j + 2],  k++;
            else f = 1;
        j++;
    }
    std::cout << r;
}
