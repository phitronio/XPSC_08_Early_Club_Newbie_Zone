#include <bits/stdc++.h>
using namespace std;

int main() {
	// input
    int x, y, z; cin >> x >> y >> z;
    int aus = x+z;
    int ind = y;
    if(aus < ind ) {
        cout << 0 << endl;
    }
    else {
        cout << aus - ind + 1 << endl;
    }
}
