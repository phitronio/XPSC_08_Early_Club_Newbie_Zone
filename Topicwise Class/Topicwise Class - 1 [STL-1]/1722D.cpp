#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll sum = 0;
        vector<int> left, right;
        for(int i=0; i<n; i++){
            if(i<n/2 && s[i]=='L'){  // Left-half
                right.push_back(i);
            }
            else if(i>=n/2 && s[i]=='R'){  // Right half
                left.push_back(i); 
            }

            // initial sum
            if(s[i]=='L'){
                sum += i;
            }
            else{
                sum += n-i-1;
            }
        }

        sort(right.begin(), right.end(), greater<int>());
        // index decending korttaci  /  value ta ascending convert


        vector<ll> ans;
        for(int k=1; k<=n; k++){
            if(!right.empty() || !left.empty()){
                ll val_l=-1, val_r=-1;

                // flip korar por , value
                if(!right.empty()) val_r = n-right.back()-1;  // n-i-1
                if(!left.empty()) val_l = left.back();   // i

                if(val_r>=val_l && val_r!=-1){
                    sum -= right.back();   // agher contribution bad kore dicci
                    sum += val_r;   // new contribution add korttaci
                    right.pop_back();
                }
                else if(val_l>val_r && val_l!=-1){
                    sum -= n-left.back()-1;
                    sum += val_l;
                    left.pop_back();
                }
            }  
            
            ans.push_back(sum);
        }


        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */