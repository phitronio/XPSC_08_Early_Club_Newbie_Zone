#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n, m;
    cin >> n >> m;
    string s, c;
    vector<int> inedx(m);
    cin >> s;
    for(int &x: inedx)
        cin >> x;
    cin >> c;

    set<int> idx;
    for(int i: inedx)
        idx.insert(i - 1);

    sort(c.begin(), c.end());

    int j = 0;
    for(auto i: idx)
    {
        s[i] = c[j++];
    }
    cout << s << "\n";



}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
