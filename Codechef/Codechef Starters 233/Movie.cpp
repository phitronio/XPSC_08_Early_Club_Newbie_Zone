#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n,m, a,b,c;
        cin >> n >> m >> a >> b >> c;

        int limit = min(n,m);
        int cost = c*limit  +  a*(n-limit)  +  b*(m-limit);

        cout << cost << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */