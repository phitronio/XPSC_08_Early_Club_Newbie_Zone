#include <bits/stdc++.h>
using namespace std;

int main() {
	// input 
    int x, y; cin >> x >> y;
    int ans = x * 100;
    int extra = y - x;
    ans += extra * 150;
    cout << ans << endl;
    return 0;
}
