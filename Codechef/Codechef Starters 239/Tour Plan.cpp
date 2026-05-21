#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z; cin >> x >> y >> z;
    int ans = 0;
    if(z <= 50) cout << x << endl; // first 50km cost
    else {
        ans = x; // first 50 km 
        int rem = z - 50;
        ans += rem * y; // 50+ km er jonno per km cost y 
        cout << ans << endl;
    }
}
