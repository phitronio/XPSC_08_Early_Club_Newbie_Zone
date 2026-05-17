#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        // input
        int n; cin >> n;
        string s; cin >> s;
        int left = 0, right = n - 1;
        string ans = "YES";
        while(left<=right) {
            // left and right same position kina?
            if(left == right) {
                if(s[left] == '?') {
                    ans = "NO";
                    break;
                }
                else {
                    ans = "YES";
                    break;
                }
            }
            
            // l and r diffrent position
            if(s[left] == '?' && s[right] == '?') {
                ans = "NO";
                break;
            }
            else {
                // jekunu ekta ? or kunuta ? mark na
                ans = "YES";
                left++, right--;
            }
        }
        cout << ans << endl;
    }
}
