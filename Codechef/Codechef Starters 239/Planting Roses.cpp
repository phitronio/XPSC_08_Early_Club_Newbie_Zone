#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    // 1. full segment er flower bosabo
    // 2. baki flower boro -> choto sort korbo
    // 3. bakigula bosabo
    
    int t; cin >> t;
    while(t--) {
        int n, pot, k; cin >> n >> pot >> k;
        vector<int> a(n);
        for(auto &i: a) cin >> i;
        // 1. full segment er flower bosabo
        int ans = 0;
        for(auto &flower: a) {
            if(pot <= 0) break;
            
            int mn = min(pot, flower);
            
            if(mn <= k) {
                continue;
            }
            int full_segment_flower = flower / k;
            int full_segment_pots = pot / (k + 1);
            int full_segment = min(full_segment_pots, full_segment_flower);
            
            int flower_used = full_segment * k;
            int pot_used = full_segment * (k + 1);
            
            ans += flower_used;
            flower -= flower_used;
            
            pot -= pot_used;
            
        }
        // 2. baki flower boro -> choto sort korbo
        sort(a.rbegin(), a.rend());
        
        // 3. bakigula bosabo
        for(auto flower: a) {
            if(pot <= 0) break;
            int mn = min(pot, flower);
            if(flower <= pot) {
                ans += flower;
                pot -= flower;
                pot -= 1; // extra empty rakhte hobe.. diffrent color er sathe gap rakhar jonno
            }
            else {
                ans += pot;
                pot = 0;
            }
        }
        cout << ans << endl;
    }
}
