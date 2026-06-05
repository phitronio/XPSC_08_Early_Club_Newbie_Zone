#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n);
        int sum=0;
        for(auto &val: a){
            cin >> val;
            sum += val;
        }

        bool flg = false;
        for(int i=0; i<n; i++){
            int rem = sum-a[i];
            if(rem%2==0){
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