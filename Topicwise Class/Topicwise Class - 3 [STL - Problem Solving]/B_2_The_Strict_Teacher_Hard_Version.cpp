#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> b(m);
    for (auto &u : b)
        cin >> u;

    sort(b.begin(), b.end());

    while (q--)
    {
        int a;
        cin >> a;
        auto it = upper_bound(b.begin(), b.end(), a);
        if (it == b.end())
        {
            it--;
            cout << n - *it << '\n';
        }
        else if (it == b.begin())
        {
            cout << *it - 1 << '\n';
        }
        else
        {
            int porer_teacher = *it;
            it--;
            int ager_teacher = *it;
            int len = porer_teacher - ager_teacher - 1;
            cout << (len + 1) / 2 << '\n';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}