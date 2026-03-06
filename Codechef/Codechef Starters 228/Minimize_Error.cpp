#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        ll n, q;
        cin >> n >> q;

        ll partition_size = ceil((n*1.0)/ (q+1));

        ll ans = partition_size/2;
        cout << ans << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */