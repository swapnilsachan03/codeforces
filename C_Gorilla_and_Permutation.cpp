#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  If we want to maximize the sum of all f(i) for all 1 <= i <= n, then we'd want to include the numbers contributing to f(i) in as many f(i)'s as possible.
  Similarly, to minimize the sum of all g(i), we'd want to include the numbers contributing to g(i) in as less g(i)'s as possible.
  
  Let the sum of f(i)'s be F and the sum of g(i)'s be G, then,

  -> If p[i] >= k, then it will contribute the max to F if it is at the beginning of the permutation
  -> Similarly, if p[i] <= m, it will contribute the minimum to G if we place it at the end of the permutation, after all the numbers > m have been placed
*/

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  for (int i = n; i > m; --i) {
    cout << i << " ";
  }

  for (int i = 1; i <= m; ++i) {
    cout << i << " ";
  }

  cout << endl;
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
