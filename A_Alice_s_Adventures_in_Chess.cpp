#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  
  string moves;
  cin >> moves;

  int x = 0, y = 0;

  for (int k = 0; k < 25; k++) {
    for (int i = 0; i < n; i++) {
      if (moves[i] == 'N') y += 1;
      if (moves[i] == 'S') y -= 1;
      if (moves[i] == 'E') x += 1;
      if (moves[i] == 'W') x -= 1;

      if (x == a && y == b) {
        cout << "YES" << endl;
        return;
      }
    }
  }

  cout << "NO" << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
