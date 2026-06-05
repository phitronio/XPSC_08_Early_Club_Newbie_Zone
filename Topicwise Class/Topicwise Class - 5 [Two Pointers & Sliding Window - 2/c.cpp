#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,k;
        cin >> n >> k;

        vector<ll> a(n), h(n);
        for(auto &i: a) cin >> i;
        for(auto &i: h) cin >> i;

        if(n==1){
            if(a[0]<=k) cout << 1 << endl;
            else cout << 0 << endl;
            continue;
        }

        int l=0, r=1, len=0;
        ll sub_sum=a[0];
        if(a[0]<=k) len=1;

        while(r<n){
            // niye nibo, possible hole
            if(h[r-1]%h[r]==0) sub_sum += a[r];
            else{
                l=r;
                sub_sum = a[r];
                if(sub_sum <= k){
                    len = max(len,1);
                }
                r++;
                continue;
            }

            // cancel kore dibo
            while(l<=r && sub_sum > k){
                sub_sum -= a[l];
                l++; 
            }

            // sub_sum <= k 
            len = max(len, r-l+1);
            r++;
        }

        cout << len << endl;
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */