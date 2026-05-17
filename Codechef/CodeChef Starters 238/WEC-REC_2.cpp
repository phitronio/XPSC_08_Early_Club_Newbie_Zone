#include <bits/stdc++.h>
using namespace std;

int main() {
    // testcase 
    int t; cin >> t;
    while(t--) {
        // input
        int n, mx, cluster; cin >> n >> mx >> cluster;
        vector<int> a(n);
        map<int, int> mp;
        for(int i=0;i<n;++i) {
            cin >> a[i];
            // counting
            mp[a[i]]++;
        }
        // group ke vector e nilam
        vector<pair<int, int>> vp;
        for(auto [x, y]: mp) {
            vp.push_back({x, y});
        }
        sort(vp.rbegin(), vp.rend());
        int tot = 0;
        for(int i=0;i<min(cluster, (int)vp.size());++i) {
            tot += vp[i].second;
        }
        cout << min(mx, tot) << endl;
    }
}
