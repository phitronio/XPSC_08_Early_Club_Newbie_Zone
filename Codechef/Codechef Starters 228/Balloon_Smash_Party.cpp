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

        int previously_kotojon_attack_krce = 0;

        for(int i=0; i<n; i++){
            if(a[i] > previously_kotojon_attack_krce){
                cout << previously_kotojon_attack_krce << " ";
                previously_kotojon_attack_krce++;
            }
            else{
                cout << a[i] << " ";
            }
        }
        cout << endl;



    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */