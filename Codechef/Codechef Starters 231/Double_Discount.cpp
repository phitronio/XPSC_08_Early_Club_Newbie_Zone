#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int small=a[i], boro=a[j];
                if(small>boro) swap(small,boro);

                int discount = boro/2;
                if(boro>=100){
                    discount = min(discount, 100);
                }
                
                boro-=discount;
                if(small+boro<=k) ans = max(ans, b[i]+b[j]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */