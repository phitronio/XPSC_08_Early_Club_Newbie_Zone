#include <bits/stdc++.h>
using namespace std;


// check consonent
int consonent(char c) {
    if(c == 'a' or c == 'i' or c == 'e' or c == 'o' or c == 'u') return 0;
    else return 1;
}


int main() {
    // testcase
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    string s; cin >> s;
	    string ans = "No";
	    // basic approch
	    for(int i=0;i+3<n;++i) {
	        if(consonent(s[i])>0 and consonent(s[i+1])>0 and 
	            consonent(s[i+2]) > 0 and consonent(s[i+3])>0) {
	                ans = "Yes";
	            }
	    }
	    cout << ans << endl;
	}
}
