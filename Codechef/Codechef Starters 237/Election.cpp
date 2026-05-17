#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int lagbe = (n/2)+1;
    if(lagbe > m) cout << lagbe - m << endl;
    else cout << 0 << endl;
}
