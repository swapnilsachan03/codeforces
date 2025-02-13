#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n;
  cin >> n;

  vi mat(n), req(n);

  for (int i = 0; i < n; i++) cin >> mat[i];
  
  for (int i = 0; i < n; i++) {
    cin >> req[i];
    mat[i] -= req[i];
  }

  sort(mat.begin(), mat.end());

  if (mat[0] + mat[1] < 0) {
    cout << "NO" << endl;
    return;
  }

  cout << "YES" << endl;
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
