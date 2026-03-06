#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;

        // 0 based to 1 based conversion
        a = "#" + a;
        b = "#" + b;

        int odd=0, even=0;
        for(int i=1; i<=n; i++){
            if(b[i]=='0'){
                if(i%2==1) odd++;  // i&1 -> odd
                else even++;
            }
        }

        bool flg = true;
        for(int i=1; i<=n; i++){
            if(a[i]=='1'){
                if(i%2==0){
                    if(odd>0){
                        odd--;
                    }
                    else{
                        flg = false;
                        break;
                    }
                }
                else{
                    if(even>0){
                       even--;
                    } 
                    else{
                        flg = false;
                        break;
                    }
                }
            }
        }

        if(flg) cout << "Yes" << endl;
        else cout << "No" << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */