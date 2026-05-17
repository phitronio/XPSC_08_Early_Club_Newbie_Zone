#include <bits/stdc++.h>
using namespace std;

int main() {
    // testcase
    int t; cin >> t;
    while(t--) {
        // input
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i: a) cin >> i;
        int zero = 0, pos = 0, neg = 0;
        
        vector<int> modified // sob value maximum 2bar nibo
        for(auto i: a) {
            if(i == 0) {
                if(zero < 2) {
                    modified.push_back(i);
                    zero++;
                }
            }
            if(i == 1) {
                if(pos < 2) {
                    modified.push_back(i);
                    pos++;
                }
            }
            if(i == -1) {
                if(neg < 2) {
                    modified.push_back(i);
                    neg++;
                }
            }
        }
        
        // modified e highest value 6 ta ache ekhon..
        
        // genarate all possible permutaion of modified value
        // must be sorted at the starting
        sort(modified.begin(), modified.end());
        set<int> st;
        do {
            // for(auto i: a) cout << i << ' '; cout << endl;
            int X = 0;
            for(auto i: modified) {
                if(i < X) {
                    X = 1;
                }
                else if( i > X) {
                    X = -1;
                }
                else {
                    X = 0;
                }
            }
            
            st.insert(X);
        }while(next_permutation(modified.begin(), modified.end())); // next permutaion true return kore jodi array unsorted hoy
        for(auto i: st) cout << i << ' '; cout << endl;
    }
}