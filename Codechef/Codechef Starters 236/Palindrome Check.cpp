#include <bits/stdc++.h>
using namespace std;

int main() {
    // testcase 
    int t; cin >> t;
    while(t--) {
        // inputs
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin >> a[i];
        
        
        vector<int> notun;
        for(int i=0;i<n;++i) {
            if(a[i] == k) continue;
            notun.push_back(a[i]);
        }
        
        auto rev = notun;
        reverse(rev.begin(), rev.end());
        
        if(rev == notun) { // palindrome
            cout << "Yes\n";
        }
        else cout << "No\n";
    }
}
