#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,s;
        cin >> n >> s;
        vector<int> a(n);
        for(auto &i: a) cin >> i;

        int l=0, r=0, sum=0;
        int len=0;
        while(r<n){
            sum += a[r];

            while(l<=r && sum>s){
                sum -= a[l];
                l++;
            }

            if(sum==s){
                len = max(len, r-l+1);
            }
            r++;
        }

        if(len==0){
            cout << -1 << endl;
            continue;
        }

        cout << n-len << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */