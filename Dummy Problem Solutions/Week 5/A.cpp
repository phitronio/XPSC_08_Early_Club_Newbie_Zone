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

   int max = *std::max_element(a.begin(), a.end());

   std::cout << std::count(a.begin(), a.end(), max) << "\n";
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