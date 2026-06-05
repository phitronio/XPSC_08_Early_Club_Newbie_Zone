#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll l,r;
    cin >> l >> r;

    cout << "YES" << endl;
    for(ll i=l; i<=r; i+=2){
        cout << i << " " << i+1 << endl;
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */