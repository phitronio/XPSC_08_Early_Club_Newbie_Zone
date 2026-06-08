#include <bits/stdc++.h>

using namespace std;

int run();

int main() {
#ifdef home
  freopen("i", "r", stdin);
  freopen("d", "w", stderr);
#endif
  cout.precision(15);

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  run();
}

const int N = 5000;

int a[N];

int dp[N][N];

int run() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    dp[0][i] = a[i];
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= n - i; j++) {
      dp[i][j] = dp[i - 1][j + 1] ^ dp[i - 1][j];
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      dp[i][j] = max({dp[i][j], dp[i - 1][j], dp[i - 1][j + 1]});
    }
  }

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    --l;
    int len = r - l - 1;
    cout << dp[len][l] << '\n';
  }
}