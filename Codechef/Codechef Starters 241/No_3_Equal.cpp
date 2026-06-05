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

        int cnt=1, ans=0;
        for(int i=1; i<n; i++){
            if(s[i-1]==s[i]) cnt++;
            else{
                ans += cnt/3;
                cnt=1;
            }
        }
        ans += cnt/3;

        cout << ans << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */