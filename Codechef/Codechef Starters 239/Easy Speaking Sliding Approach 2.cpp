#include <bits/stdc++.h>
using namespace std;


// check consonent
int consonent(char c) {
    string vowels = "aeiou";
    if(vowels.find(c) != -1) return 0;
    else return 1;
}


int main() {
    // testcase
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    string s; cin >> s;
	    string ans = "No";
	    int mx_cnt = 0;
	    // sliding approch
	    for(int i=0;i<n;++i) {
	        int consecutive_consonent = 0;
	        while(i<n and consonent(s[i])) consecutive_consonent++,i++;
	        
	        mx_cnt = max(mx_cnt, consecutive_consonent);
	    }
	    if(mx_cnt >= 4) ans = "Yes";
	    else ans = "No";
	    cout << ans << endl;
	}
}
