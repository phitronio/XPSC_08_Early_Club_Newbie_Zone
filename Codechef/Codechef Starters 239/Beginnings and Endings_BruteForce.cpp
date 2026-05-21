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
	    // bruteforce
	    for(int i=0;i<n;++i) {
	        // target value 
	        int val = a[i];
	        int left = -1, right = -1;
	        for(int j = 0; j< n;++j) {
	            if(a[j] == val) {
	                if(left == -1) left = j;
	                else {
	                    right = j;
	                }
	            }
	        }
	        if(left != -1 and right != -1) {
	            int cur_op = left +  ( n - 1 - right);
	            ans = min(ans, cur_op);
	        }
	    }
	    if(ans == 1e9) ans = -1;
	    
	    cout << ans << endl;
	}

}
