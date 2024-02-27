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
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      mp[nums[i]] += 1;
    }

    sort(nums.begin(), nums.end());

    bool flag = true;
    int num = nums[0];

    for (int i = 1; i < n; i++) {
      if (nums[i] % num != 0) {
        flag = false;
        break;
      }
    }

    if (nums[0] != nums[1]) flag = false;

    if (flag || mp.size() == 1 || mp[1] >= 2) {
      cout << "NO" << endl;
      continue;
    }

    cout << "YES" << endl;
  }

  return 0;
}
