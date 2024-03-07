#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> nums(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> nums[i];

    sort(nums.begin() + 1, nums.end(), greater<int>());

    for (int i = 1; i <= n; i++) {
      nums[i] += nums[i - 1]; 
    }

    int ans = -1e9;

    for (int i = 0; i <= k; i++) {
      ans = max(ans, nums[n] - 2 * nums[min(i + x, n)] + nums[i]);
    }

    cout << ans << endl;
  }

  return 0;
}
