#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int y = 500;
        for(int i=0; i<n; i++){
            int a,b;
            cin >> a >> b;

            if(y<a) y = a;
            else if(y>b) y = b;
            // else  No change
        }

        cout << y << endl;
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */