#include <iostream>
using namespace std;

int main() {
   long long t, n, m, x, a, b, c;
   cin >> t;

   while (t--)
   {
      cin >> n >> m >> x;
      a = x / n;

      a += 1;
      b = x % n;
      if (b == 0)
      {
         b = n - 1;
         a -= 1;
      }
      else
         b -= 1;
      c = b * m + a;

      cout << c << "\n";
   }
   return 0;
}
