#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using u128 = unsigned __int128;
using i128 = __int128;

void solve() {
   int n, x, y;
   std::cin >> n >> x >> y;

   std::vector<int> p(n);
   for (int i = 0; i < n; i++) {
      std::cin >> p[i];
   }

   auto min = std::min_element(p.begin() + x, p.begin() + y);
   std::rotate(p.begin() + x, min, p.begin() + y);

   std::vector<int> a(p.begin() + x, p.begin() + y);
   std::vector<int> b(p.begin(), p.begin() + x);
   b.insert(b.end(), p.begin() + y, p.end());
   int i = 0;
   while (i < b.size() && b[i] < a[0]) {
      i++;
   }
   b.insert(b.begin() + i, a.begin(), a.end());

   for (int i = 0; i < n; i++) {
      std::cout << b[i] << " \n"[i == n - 1];
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