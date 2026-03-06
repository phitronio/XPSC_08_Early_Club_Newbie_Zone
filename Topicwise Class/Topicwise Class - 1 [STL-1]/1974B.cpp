#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string t;
        cin >> t;

        string r = t;
        sort(r.begin(), r.end());
        r.erase(unique(r.begin(), r.end()), r.end());

        map<char,char> mp;
        int m = r.size();
        for(int i=0; i<m; i++){
            mp[r[i]] = r[m-i-1];
        }


        for(int i=0; i<n; i++){
            t[i] = mp[t[i]];
        }

        cout << t << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */