#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin >> n;
    deque<int> a(n);
    for(int &x: a)
        cin >> x;

    int ans = 1;
    set<int> prev;
    prev.insert(a[0]);
    a.pop_front();
    while(a.size())
    {
        set<int> next;
        while(prev.size() && a.size())
        {
            prev.erase(a.front());
            next.insert(a.front());
            a.pop_front();
        }
        if(prev.size())
            break;
        prev = next;
        ans++;
    }
    cout << ans << "\n";
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
