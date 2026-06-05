#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        ll l,r;
        cin >> l >> r;

        if(2*l<=r) cout << l << " " << 2*l << endl;
        else cout << -1 << " " << -1 << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */