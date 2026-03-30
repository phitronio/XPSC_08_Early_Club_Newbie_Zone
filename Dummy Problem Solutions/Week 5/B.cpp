#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using u128 = unsigned __int128;
using i128 = __int128;

void solve() {
   int n;
   std::cin >> n;

   std::vector<int> a(n);
   for (int i = 0; i < n; i++) {
      std::cin >> a[i];
   }

   if (std::is_sorted(a.begin(), a.end())) {
      std::cout << n << "\n";
   }
   else {
      std::cout << 1 << "\n";
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