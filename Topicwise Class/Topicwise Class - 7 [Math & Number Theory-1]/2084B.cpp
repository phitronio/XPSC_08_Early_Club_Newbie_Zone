#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto &i: a) cin >> i;

        sort(a.begin(), a.end());

        ll mn = a[0];
        vector<ll> mul;
        for(int i=1; i<n; i++){
            if(a[i]%mn==0){
                mul.push_back(a[i]);
            }
        }

        ll gc=0;
        bool flg = false;
        for(int i=0; i<mul.size(); i++){
            gc = __gcd(gc, mul[i]);
            if(gc == mn){
                flg = true;
                break;
            }
        }

        if(flg) cout << "Yes" << endl;
        else cout << "No" << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */