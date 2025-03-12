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

  vi nums(n), ans;

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  ans.push_back(nums[0]);

  for (int i = 1; i < n; i++) {
    if (ans.back() + 1 == nums[i] || ans.back() == 1) {
      ans.push_back(nums[i]);
      continue;
    }

    if (ans.back() < nums[i]) ans.push_back(ans.back() - 1);
    else if (ans.back() > nums[i]) ans.push_back(max(1, nums[i] - 1));

    ans.push_back(nums[i]);
  }

  int m = ans.size();

  cout << m << endl;
  for (int i = 0; i < m; i++) cout << ans[i] << " ";
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
