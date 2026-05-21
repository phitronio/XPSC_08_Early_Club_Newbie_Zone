#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    vector<int> a(n);
	    for(auto &i: a) cin >> i;
	    int mid = n/2;
	    int target_sum = a[mid] + a[mid-1];
	    
	    string ans = "Yes";
	    int left = 0, right = n - 1;
	    while(left < right) {
	        int cur_sum = a[left] + a[right];
	        if(cur_sum != target_sum) {
	            ans = "No";
	        }
	        left++;
	        right--;
	    }
	    cout << ans << endl;
	}
}
