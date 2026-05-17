#include <bits/stdc++.h>
using namespace std;

int main() {
	// testcase
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int a[n];
	    for(int i=0;i<n;++i) {
	        cin >> a[i];
	    }
	    int ans = 0;
	    // bruteforce
	    for(int i=0;i<n;++i) {
	        // left e small
	        int small = 0;
	        for(int j = 0;j<i;++j) {
	            if(a[j] < a[i]) {
	                small++;
	            }
	        }
	        
	        // right e big
	        int big = 0;
	        for(int j=i+1;j<n;++j) {
	            if(a[j] > a[i]) {
	                big++;
	            }
	        }
	        
	        if(small == big) {
	            ans++;
	        }
	    }
	    cout << ans << endl;
	}
}
