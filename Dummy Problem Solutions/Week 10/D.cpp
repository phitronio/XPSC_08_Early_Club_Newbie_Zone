#include <bits/stdc++.h>

using namespace std;

namespace solution {
int run();
}

int main() {
#ifdef home
  freopen("i", "r", stdin);
  freopen("d", "w", stderr);
#endif
  cout.precision(15);

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solution::run();
}
namespace solution {

const int SZ = 1500500;

const int N = 100500;

int x1[N], x2[N], y1[N], y2[N];

bool erased[N];

priority_queue<int> els[SZ];

int mn[SZ];
int mx[SZ];

bool seen[N];

enum {
  ACTION_ADD,
  ACTION_ERASE,
  ACTION_VOID
};

void recalc(int cur) {
  int max_in_child = max(mx[cur * 2], mx[cur * 2 + 1]);

  while (!els[cur].empty() && erased[els[cur].top()]) {
    els[cur].pop();
  }

  int max_in_vertex = els[cur].empty() ? -1 : els[cur].top();
  int min_in_child = min(mn[cur * 2], mn[cur * 2 + 1]);

  if (max_in_vertex > max_in_child) {
    if (seen[max_in_vertex] || max_in_vertex < min_in_child) {
      mx[cur] = -1;
    } else {
      mx[cur] = max_in_vertex;
    }
  } else {
    mx[cur] = max_in_child;
  }
  mn[cur] = max(max_in_vertex, min_in_child);
}

void add(int cur, int lb, int rb, int id, int action, int l = 0, int r = 2 * N) {
  if (lb >= r || rb <= l) {
    return;
  }

  if (lb <= l && rb >= r) {
    if (action == ACTION_ADD) {
      els[cur].push(id);
    }

    recalc(cur);
    return;
  }

  int mid = (l + r) / 2;

  add(cur * 2, lb, rb, id, action, l, mid);
  add(cur * 2 + 1, lb, rb, id, action, mid, r);

  recalc(cur);
}

set<int> cx, cy;

unordered_map<int, int> id_x, id_y;

vector<pair<int, int> > events[2 * N];

int run() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

    cx.insert(x1[i]);
    cx.insert(x2[i]);

    cy.insert(y1[i]);
    cy.insert(y2[i]);
  }

  int j = 0;
  for (auto x : cx) {
    id_x[x] = j++;
  }

  j = 0;
  for (auto y : cy) {
    id_y[y] = j++;
  }

  for (int i = 0; i < n; i++) {
    x1[i] = id_x[x1[i]];
    x2[i] = id_x[x2[i]];

    y1[i] = id_y[y1[i]];
    y2[i] = id_y[y2[i]];

    events[x1[i]].push_back({i, ACTION_ADD});

    events[x2[i]].push_back({i, ACTION_ERASE});
  }

  for (int i = 0; i < SZ; i++) {
    mx[i] = -1;
  }

  int cnt_x = id_x.size();

  for (int i = 0; i < cnt_x; i++) {
    for (auto e : events[i]) {
      int id = e.first;
      int action = e.second;
      if (action == ACTION_ERASE) {
        erased[id] = true;
      }
      add(1, y1[id], y2[id], id, action);
    }
    while (mx[1] >= mn[1]) {
      int id = mx[1];
      seen[id] = true;
      add(1, y1[id], y2[id], id, ACTION_VOID);
    }
  }

  int ans = 1;
  for (int i = 0; i < n; i++) {
    if (seen[i]) {
      ans++;
    }
  }
  cout << ans;

}

}