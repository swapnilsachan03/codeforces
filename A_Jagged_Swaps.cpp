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

  vi nums(n);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  if (nums[0] == 1) cout << "YES" << endl;
  else cout << "NO" << endl;
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
