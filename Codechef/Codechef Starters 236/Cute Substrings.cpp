#include <bits/stdc++.h>
using namespace std;

int main() {
    // testcase 
    int t; cin >> t;
    while(t--) {
        // input
        int n; cin >> n;
        string s; cin >> s;
        
        int ans = 0;
        
        // two pointer 
        int l = 0;
        while(l < n) {
            if(s[l] != 'u' and s[l] != 'o') {
                l++;
                continue;
            }
            // cute hoite pare... 
            // find longest cute substring
            l++;
            int cur_len = 1;
            while(l < n) {
                if(s[l] == 'w' and s[l+1] == 'o') {
                    l += 2;
                    cur_len += 2;
                    continue;
                }
                if(s[l] == 'w' and s[l+1] == 'u') {
                    l += 2;
                    cur_len += 2;
                    continue;
                }
                break;
            }
            if(cur_len %2 == 1) {
                ans = max(ans, cur_len);
            }
        }
        cout << ans << endl;
    }
}
