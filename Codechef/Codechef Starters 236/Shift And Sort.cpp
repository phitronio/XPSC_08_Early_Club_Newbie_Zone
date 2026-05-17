#include <bits/stdc++.h>
using namespace std;

int main(){
    // testcase
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin >> a[i];
        
        // sorted banano
        for(int i=0;i<n-1;++i) {
            if(a[i] > a[i+1]) {
                // sorted na.. 
                // update value by operation
                int total = a[i] + a[i+1];
                int half = total / 2;
                
                a[i] = half;
                a[i+1] = total - half;
                
                //adjacent 2ta index e operation kora jabe na..
                i++;
            }
        }
        // check sorted 
        bool sorted = true;
        for(int i=1;i<n;++i) {
            if(a[i-1] > a[i]) {
                sorted = false;
            }
        }
        if(sorted) cout << "Yes\n";
        else cout << "No\n";
    }
}