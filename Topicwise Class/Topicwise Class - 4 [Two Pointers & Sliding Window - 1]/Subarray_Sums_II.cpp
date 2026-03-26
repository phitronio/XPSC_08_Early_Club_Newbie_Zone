#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    // prefix sum calculation
    vector<ll> pre(n+1);
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+a[i-1];
    }

    ll cnt=0;
    map<ll,ll> mp;
    mp[0]=1;

    for(int r=1; r<=n; r++){
        ll y = pre[r]-x;
        cnt += mp[y];
        mp[pre[r]]++;
    }

    cout << cnt << endl;
    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */


