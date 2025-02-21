#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, k;
  cin >> n >> k;

  vi nums(n);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end());

  int res = 0, curr = 1;

  for (int i = 0; i < n - 1; i++) {
    if (nums[i + 1] - nums[i] <= k) curr += 1;
    else curr = 1;
  
    res = max(res, curr);
  }

  if (curr == n) {
    cout << 0 << endl;
    return;
  }

  cout << n - res << endl;
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
