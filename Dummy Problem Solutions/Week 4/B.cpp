#include <bits/stdc++.h>

using namespace std;

const int N = 10010;

int t, n, x, a[N];

int main() {
   cin >> t;
   while (t--) {
      scanf("%d %d", &n, &x);
      for (int i = 1; i <= n; ++i) {
         scanf("%d", a + i);
      }
      sort(a + 1, a + n + 1);
      int at = 0, tot = 0;
      while (at < n and tot < x) tot += a[++at];
      if (tot == x) {
         if (at == n) {
            puts("NO");
            continue;
         }
         swap(a[at], a[at + 1]);
      }
      puts("YES");
      for (int i = 1; i <= n; ++i) printf("%d ", a[i]);
      puts("");
   }
   return 0;
}

