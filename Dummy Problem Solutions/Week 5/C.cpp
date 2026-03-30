#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using u128 = unsigned __int128;
using i128 = __int128;

void solve() {
   int n;
   std::cin >> n;

   std::string s;
   std::cin >> s;

   std::string t;
   for (auto c : s) {
      if (!t.empty() && t.back() == c) {
         t.pop_back();
      }
      else {
         t += c;
      }
   }

   if (t.empty()) {
      std::cout << "YES\n";
   }
   else {
      std::cout << "NO\n";
   }
}

int main() {
   std::ios::sync_with_stdio(false);
   std::cin.tie(nullptr);

   int t;
   std::cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}