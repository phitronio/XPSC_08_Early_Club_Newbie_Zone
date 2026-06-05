#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll small_prime(ll x){
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            return i;
        }
    }
    return x;
}

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        ll l,r;
        cin >> l >> r;

        if(r<=3){
            cout << -1 << endl;
        }
        else{
            if(l<r){
                if(r&1) r--;
                cout << 2 << " " << r-2 << endl;
            }
            else{ // l==r
                ll prime = small_prime(l);
                if(prime==l){
                    cout << -1 << endl;
                }
                else{
                    cout << prime << " " << l-prime << endl;
                }
            }
        }


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */