#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, k, n, t = 0, q, q1;
    bool f = 0;
    bool a[10];
    cin>>n;
    for (i = 0; i < 10; i++)
    {
        a[i] = 0;
    }

    k = n;
    i = 0;
    while (k != 0)
    {
        if (a[k % 10] == 0)
        {
            ++i;
            a[k % 10] = 1;
        }
        k /= 10;
    }
    if (i<3)
    {
        cout<<n;
    }
    else
    {
        while (!f)
        {
            --t;
            k = n + t;
            i = 0;
            for (int j=0;j<10;j++){a[j]=0;}
            while (k != 0)
            {
                if (a[k % 10] == 0)
                {
                    i++;
                    a[k % 10] = 1;
                }
                k /= 10;
            }
            if (i<3)
            {
                f = 1;
                q = (-1)*t;
            }
        }
        f = 0;
        while (!f)
        {
            ++t;
            k = n + t;
            i = 0;
            for (int j=0;j<10;j++){a[j]=0;}
            while (k != 0)
            {
                if (a[k % 10] == 0)
                {
                    i++;
                    a[k % 10]=1;
                }
                k /= 10;
            }
            if (i < 3)
            {
                f=1;
                q1=t;
            }

        }
        if (q<=q1){cout<<n-q;}
        else {cout<<n+q1;}
    }
    return 0;
}
