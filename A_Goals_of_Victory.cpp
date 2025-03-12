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
  ll sum = 0;

  for (int i = 0; i < n - 1; i++) {
    cin >> nums[i];
    sum += nums[i];
  }

  cout << -1 * sum << endl;
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
