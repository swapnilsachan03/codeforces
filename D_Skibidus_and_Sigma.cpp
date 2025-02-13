#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pii pair<ll, ll>
#define vii vector<pair<ll, ll>>

/*
  The score of an array b of length n can be represented as score(b) = n * b[0] + (n - 1) * b[1] + ... + 1 * b[n - 1]
  A concatenation of arrays a + b will have score(a + b) = n * sum(a) + score(a) + score(b)
  Hence, we need to sort the arrays in decreasing order of their scores, in order to achieve maximum answer.
*/

void solve() {
  int n, m;
  cin >> n >> m;

  vvi mat(n, vi (m));
  vi sums(n), scores(n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
      if (j > 0) mat[i][j] += mat[i][j - 1];
    }

    sums[i] = mat[i][m - 1];
    scores[i] = accumulate(mat[i].begin(), mat[i].end(), 0ll);
  }

  sort(sums.begin(), sums.end());

  ll ans = 0;

  for (int i = 0; i < n; i++) {
    ans += sums[i] * i * m;
    ans += scores[i];
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
