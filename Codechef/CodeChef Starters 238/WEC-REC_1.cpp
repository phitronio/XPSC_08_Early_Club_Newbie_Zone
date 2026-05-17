#include <bits/stdc++.h>
using namespace std;

int main() {
    // testcase 
    int t; cin >> t;
    while(t--) {
        // input
        int n, mx, cluster; cin >> n >> mx >> cluster;
        vector<int> a(n);
        for(int i=0;i<n;++i) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        map<int, int> cnt, rnk;
        int cur_rank = 1;
        for(auto val: a) {
            if(cnt.count(val) == 1) {
                // new rank deoa lagbe na
                cnt[val]++;
            }
            else {
                rnk[cur_rank] = val;
                cur_rank++;
                cnt[val]++;
            }
        }
        int tot = 0;
        for(int i=1;i<=cluster;++i) {
            int val = rnk[i];
            tot += cnt[val];
        }
        
        cout << min(mx, tot) << endl;
    }
}
