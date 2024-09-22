#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/* If two opposite corners of the rectangle are the same color, then it can be colored in a single color.

In other scenarios, we can have 16 permutations for colors in 4 corners. We can not color the squares in same color only if there are two rows on opposite sides, each having a different color.

Thus we only need to check three conditions:

-> If two opposite corners have different color, output YES
-> Else if the corners in first row have the same color (then the corner squares in last row will be of opposite to the color of first row's squares), check if any square exists in first or last row having color different than their row's corner squares' color. The same condition can be checked for first and last columns too. If true, output YES
-> Else, output NO */

void solve() {
  int m, n;
  cin >> m >> n;

  vector<string> mat(m);

  for (int i = 0; i < m; i++) {
    cin >> mat[i];
  }

  if (mat[0][0] == mat[m - 1][n - 1] || mat[0][n - 1] == mat[m - 1][0]) {
    cout << "YES" << endl;
    return;
  }

  string ans = "NO";

  if (mat[0][0] == mat[m - 1][0]) {
    for (int i = 0; i < m; i++) {
      if (mat[i][0] != mat[0][0]) ans = "YES";
      if (mat[i][n - 1] != mat[0][n - 1]) ans = "YES";
    }
  }

  else {
    for (int i = 0; i < n; i++) {
      if (mat[0][i] != mat[0][0]) ans = "YES";
      if (mat[m - 1][i] != mat[m - 1][0]) ans = "YES";
    }
  }

  cout << ans << endl;
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
