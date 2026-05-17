#include <bits/stdc++.h>
using namespace std;

int main() {
    // testcase 
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vector<int> a(n);
        for(auto &i: a) cin >> i;
        
        while(q--) {
            int ty; cin >> ty;
            if(ty == 1) {
                // update type 
                int pos, val; cin >> pos >> val; pos--; // converting 0 based;
                a[pos] = val;
            }
            else {
                // output type 
                int l, r; cin >> l >> r; --l, --r; // converting 0 based 
                
                if(l == r) {
                    cout << a[l] << endl;
                }
                else {
                    int sz = (r-l+1);
                    
                    if(sz%2==1 ) {
                        // odd size 
                        // middle 3 
                        int mid = l + sz/2;
                        int midR = mid + 1;
                        int midL = mid - 1;
                        
                        int v1 = min(a[mid], a[midL]);
                        int v2 = min(a[mid], a[midR]);
                        cout << max(v1, v2) << endl;
                    }
                    else {
                        // even size 
                        // middle 2
                        int midR = l + sz/2;
                        int midL = midR-1;
                        
                        cout << max(a[midR], a[midL]) << endl;
                    }
                }
            }
        }
        
    }
}
