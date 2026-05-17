#include <bits/stdc++.h>
using namespace std;

int main() {
    // testcase 
    int t; cin >> t;
    while(t--) {
        int run; cin >> run;
        int cost = 0;
        if(run > 20) {
            // double kore kisu run korse
            int double_run = run - 20;
            int ball = double_run / 2;
            cost += ball * 5; // 20 er porer cost
            cost += 20 * 10; // first 20 er cost
        }
        else {
            cost += run * 10; // single run kore sob nise
        }
        cout << cost << endl;
    }
}
