#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;++i) cin >> a[i];
        // value er count lagbe
        map<int, int> mp;
        // counting 
        for(int i=0;i<n;++i) {
            mp[a[i]]++;
        }
        
        // i er theke small koyta missing
        set<int> available;
        // ans printing 
        for(int i=0;i<=n;++i) {
            // count -> must delete
            int ans1 = mp[i];
            
            // small missing value koyta -> must add
            int ans2 = i - available.size();
            
            
            int ans = max(ans1, ans2);
            
            cout << ans << ' ';
            
            // i is available
            if(mp[i]) {
                available.insert(i);
            }
        }
        cout << endl;
    }

}
