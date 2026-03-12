#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x, n;
    cin >> x >> n;

    set<int> lights;
    multiset<int> distances;

    lights.insert(0);
    lights.insert(x);
    distances.insert(x);

    for(int i = 1; i <= n; i++)
    {
        int p;
        cin >> p;

        auto it = lights.upper_bound(p);
        int right = *it;
        it--;
        int left = *it;

        distances.erase(distances.find(right - left));
        distances.insert(right - p);
        distances.insert(p - left);

        lights.insert(p);

        cout << *distances.rbegin() << " ";
    }
    cout << '\n';

    return 0;
}
