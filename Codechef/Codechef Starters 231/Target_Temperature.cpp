#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int mx = 0;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            mx = max(mx, x);
            mp[x]++;
        }

        bool flag = true;
        for(auto [val,cnt]: mp){
            if(val!=mx && cnt>1){
                flag = false;
                break;
            }
        }

        if(flag) cout << "Yes\n";
        else cout << "No\n";

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */