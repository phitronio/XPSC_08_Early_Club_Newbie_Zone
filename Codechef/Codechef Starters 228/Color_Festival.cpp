#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        set<int> st;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            st.insert(x);
        }

        cout << st.size() << endl;
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */