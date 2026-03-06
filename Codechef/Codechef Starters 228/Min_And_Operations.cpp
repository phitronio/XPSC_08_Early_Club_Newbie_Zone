#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;

        // ll sum = 0;
        // for(int i=0; i<=n; i+=2){
        //     sum += i;
        // }
        // cout << sum << endl;

        ll even = n/2;
        cout << even*(even+1) << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */