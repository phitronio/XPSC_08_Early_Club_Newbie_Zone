#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> per(n);
        for(int i=0; i<n; i++) cin >> per[i];

        deque<int> dq;
        for(int i=0; i<n; i++){
            if(dq.empty() || dq.front()>per[i]){
                dq.push_front(per[i]);
            }
            else{
                dq.push_back(per[i]);
            }
        }

        for(int i=0; i<n; i++) cout << dq[i] << " "; cout << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */