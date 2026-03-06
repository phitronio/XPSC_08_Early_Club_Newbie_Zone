#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<ll> f(n);
        for(int i=0; i<n; i++) cin >> f[i];

        ll sum = (f[0]+f[n-1])/(n-1);

        vector<ll> a(n);
        a[0] = (sum+f[1] - f[0])/2;
        a[n-1] = (sum+f[n-2] - f[n-1])/2;

        for(int i=1; i<n-1; i++){
            a[i] = ((f[i-1]+f[i+1]) - 2*f[i])/2;
        }

        for(int i=0; i<n; i++) cout << a[i] << " "; cout << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */