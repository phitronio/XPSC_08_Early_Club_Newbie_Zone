#include <bits/stdc++.h>
using namespace std;

#define ll long long


// BlackBpx that returns the contribution of each position parity
vector<int> nthRowOfPascalTriangle(int n) {
    n--;
    vector<int> res;

    for (int r = 0; r <= n; r++) {
        res.push_back(((r & (n - r)) == 0) ? 1 : 0);
    }
    return res;
}


int main() {
    // testcase
    int t; cin >> t;
    while(t--) {
        // input
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i: a) cin >> i;
        
        // pascal nth row;
        vector<int> nth_row = nthRowOfPascalTriangle(n);
        // ans calculate
        int ans = 0;
        for(int i=0;i<n;++i) {
            if(nth_row[i]% 2 == 1) {
                // odd contribution
                // ans e XOR hobe
                ans = ans ^ a[i];
            }
            else {
                // even contribution
                // zero add hoy 
                // kisu add hoy na
            }
        }
        cout << ans << endl;
        
    }
}
