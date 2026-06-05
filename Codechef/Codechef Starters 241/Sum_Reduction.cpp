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

        // 1st Approch: 
        // ll sum = 0, oor=0;
        // for(auto &val: a){
        //     cin >> val;
        //     sum += val;
        //     oor |= val;
        // }

        // if(sum==oor) cout << "Yes" << endl;
        // else cout << "No" << endl;


        // 2nd Approch: 
        for(auto &i: a) cin >> i;


        vector<int> bit(31);
        for(int i=0; i<n; i++){
            int num = a[i];
            for(int b=0; b<=30; b++){
                if(num&(1<<b) != 0){
                    bit[b]++;
                }
            }
        }

        // for(auto val: bit) cerr << val << " "; cerr << endl;
        bool flg=true;
        for(int b=0; b<=30; b++){
            if(bit[b]>1){
                flg = false;
                break;
            }
        }

        if(flg) cout << "Yes" << endl;
        else cout << "No" << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */
















