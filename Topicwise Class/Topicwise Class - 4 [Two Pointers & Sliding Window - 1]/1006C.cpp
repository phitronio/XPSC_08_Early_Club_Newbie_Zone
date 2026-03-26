#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    ll sum1=0, sum3=0, ans=0;
    int l=0, r=n-1;

    while(l<=r){
        if(sum1<sum3){
            sum1 += a[l];
            l++;
        }
        else if(sum1>=sum3){
            sum3 += a[r];
            r--;
        }
        if(sum1==sum3) ans = max(ans,sum1);
    }

    cout << ans << endl;

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */