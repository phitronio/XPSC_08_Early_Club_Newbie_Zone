#include <bits/stdc++.h>
using namespace std;

int main() {
	// testcase
	int t; cin >> t;
	while(t--) {
	    int n, m; cin >> n >> m;
	    vector<int> a;
	    a.push_back(0);
	    a.push_back(1); // 1 ta bosaisi
	    for(int i=2;i<=n;++i) {
	        int val = a[i-1] - a[i-2];
	        // modular field e value negetive hole +mod korte hoy
	        if(val < 0) val += m;
	        a.push_back(val);
	    }
	    if(a[n] != a[n-1]) {
	        cout << -1 << endl;
	    }
	    else {
	        for(int i=1;i<=n;++i) {
	            cout << a[i] << " ";
	        }
	        cout << endl;
	    }
	}

}
