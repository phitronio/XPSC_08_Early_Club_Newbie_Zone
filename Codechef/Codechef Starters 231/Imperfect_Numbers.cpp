#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;

        int ans = n;
        for(int i=1; i<=2*n; i++){
            if((i%2==0 || i%5==0) && i%10!=0){
                int m = i;
                ans = min(ans, abs(n-m));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */