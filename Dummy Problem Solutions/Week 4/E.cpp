#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int tc;
   cin >> tc;
   while (tc--) {
      int n;
      cin >> n;
      vector<int> o, e;
      for (int i = 0; i < n; i++) {
         int x;
         cin >> x;
         if (x & 1) o.push_back(x);
         else e.push_back(x);
      }
      for (int x : o) cout << x << " ";
      for (int x : e) cout << x << " ";
      cout << endl;
   }
   return 0;
}
