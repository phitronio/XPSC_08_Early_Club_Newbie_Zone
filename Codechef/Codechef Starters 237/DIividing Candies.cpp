#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        // input
        int n, bacca; cin >> n >> bacca;
        int a[n];
        for(int i=0;i<n;++i) cin >> a[i];
        
        int ans = 0;
        for(int i=0;i<n;++i) {
            // evenly divisible kina 
            int candy = a[i];
            if(candy % bacca == 0) {
                // soman vabe deoa jabe
                ans = max(ans, candy);
            }
        }
        cout << ans << endl;
    }
}
