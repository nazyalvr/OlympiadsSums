#include <bits/stdc++.h>

using namespace std;

int compare (const void *a,const void *b)
{
     return (*(int*)a - *(int*)b);
}


main()
{
    int a;
    int l=0;
    int m[100001];
    while (cin >> a)
    {
        m[l++]=a;

    }
    qsort(m,l,sizeof(int),compare);
    int q=0;
    int k=m[1]-m[0];
    for (int i=1;i<l-1;i++)
    {
        if (m[i+1]-m[i]!=k) { q=1;break; }

    }
    if (q==0) cout <<"Yes";else cout <<"No";
}
