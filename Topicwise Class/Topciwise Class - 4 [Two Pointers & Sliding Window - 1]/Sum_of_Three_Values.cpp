#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n, sum;
    cin >> n >> sum;
    vector<pair<int,int>> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());

    int x,y,z;
    bool paici=false;
    for(int i=0; i<n; i++){
        int ai = a[i].first;
        int lagbe = sum-ai;  // aj+ak == lagbe

        // Sum of 2 values
        int l=i+1, r=n-1;
        while(l<r){
            int cursum = a[l].first + a[r].first;
            if(cursum==lagbe){
                paici = true;
                x = a[i].second;
                y = a[l].second;
                z = a[r].second;
                break;
            }
            else if(cursum>lagbe) r--;
            else l++;
        }

        if(paici) break;
    }

    if(paici) cout << x << " " << y << " " << z << endl;
    else cout << "IMPOSSIBLE\n";

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */











