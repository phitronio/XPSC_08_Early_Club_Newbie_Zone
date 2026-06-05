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
        for(int i=0; i<n; i++) cin >> a[i];

        vector<int> copy = a;
        sort(copy.begin(), copy.end());

        vector<int> final_a;
        for(int i=0; i<n; i++){
            if(a[i]!=copy[i]) final_a.push_back(a[i]);
        }

        if(final_a.size()==0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << final_a.size() << endl;
            for(auto it: final_a){
                cout << it << " ";
            }
            cout << endl;
        }

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */