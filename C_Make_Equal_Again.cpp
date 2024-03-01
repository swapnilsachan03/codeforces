#include <bits/stdc++.h>
using namespace std;

int solve (vector<int> &nums, int n) {
  int i = 0, j = n - 1;

  while (i < n - 1 && nums[i] == nums[i + 1]) i += 1;
  while (j > 0 && nums[j] == nums[j - 1]) j -= 1;

  if (i >= j) return 0;

  if (nums[0] != nums[n - 1]) return min(j, n - i - 1);
  else return j - i - 1;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << solve(nums, n) << endl;
  }

  return 0;
}
