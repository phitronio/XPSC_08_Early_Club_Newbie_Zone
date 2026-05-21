#include <bits/stdc++.h>
using namespace std;

int main() {
	// testcase
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    vector<int> a(n);
	    for(auto &i: a) cin >> i;
	    
	    int ans = 1e9;
	    map<int, vector<int>> mp;
	    for(int i=0;i<n;++i) {
	        int val = a[i];
	        mp[val].push_back(i);
	    }
	    for(auto [i, x]: mp) {
	        if(x.size() > 1) {
	            int left = x[0];
	            int right = x.back();
	            int cur_op = left + (n-1 - right);
	            ans = min(ans, cur_op);
	        }
	       // cout << i << " -> ";
	       // for(auto j: x) cout << j << ' '; cout << endl;
	    }
	    if(ans == 1e9) ans = -1;
	    cout << ans << endl;
	}

}
