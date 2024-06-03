#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, i, j;
int last;
string s;

int main()
{
    range
    {
        cin >> n;
        cin.ignore(1);
        getline(cin, s);
        string res = "1 ";
        int tec = 1;
        set<int> set0, set1;
        set0.clear();
        set1.clear();
        last = s[0] - '0';
        if (last) set1.insert(1);
        else set0.insert(1);
        int k = 1;
        for (i = 1; i < n; ++i)
            {
                if ((s[i] - '0') != last)
                {
                    if (!last)
                        {
                            set0.erase(tec);
                            set1.insert(tec);
                            last = 1;
                        }
                    else
                        {
                            set1.erase(tec);
                            set0.insert(tec);
                            last = 0;
                        }

                }
                else
                    {
                        if ((set0.empty()&&last)||(set1.empty()&&(!last)))
                        {
                            ++k;
                            tec = k;
                            if(last) set1.insert(tec);
                            else set0.insert(tec);
                        }
                        else
                            {
                                if (last)
                                    {
                                        for (j = 1; j <= k; ++j)
                                        {
                                            if (set0.count(j) > 0)
                                            {
                                                tec = j;
                                            }
                                        }
                                        set0.erase(tec);
                                        set1.insert(tec);
                                    }
                                else
                                    {
                                        for (j = 1; j <= k; ++j)
                                        {
                                            if (set1.count(j) > 0)
                                            {
                                                tec = j;
                                            }
                                        }
                                        set1.erase(tec);
                                        set0.insert(tec);
                                    }
                            }

                    }
                res = res + to_string(tec) + " ";
            }
        cout<< k << '\n';
        cout<< res << '\n';
    }
}

