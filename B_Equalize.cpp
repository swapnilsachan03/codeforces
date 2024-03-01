#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    nums.resize(unique(nums.begin(), nums.end()) - nums.begin());

    int idx = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++) {
      while (nums[i] - nums[idx] >= n) idx += 1;
      ans = max(ans, i - idx + 1);
    }

    cout << ans << endl;
  }

  return 0;
}
