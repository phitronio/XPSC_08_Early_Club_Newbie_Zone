#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;

        vector<vector<int>> arr(n);
        for(int i=0; i<n; i++){
            int a,b,c;
            cin >> a >> b >> c;
            vector<int> tmp = {a,b,c};
            sort(tmp.begin(), tmp.end());
            arr[i] = tmp;
        }

        multiset<pair<int,int>> ms;  // (val, index)
        vector<int> cur(n);

        for(int i=0; i<n; i++){
            ms.insert({arr[i][0], i});
        }

        int ans = 2e9;
        while(1){
            auto it_min = ms.begin();
            auto it_max = ms.rbegin();
            
            int mn = it_min->first;
            int mx = it_max->first;
            ans = min(ans, mx-mn);

            int idx = it_min->second;
            ms.erase(it_min);

            cur[idx]++;
            if(cur[idx]==3) break;

            ms.insert({arr[idx][cur[idx]], idx});
        }
        
        cout << ans << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */