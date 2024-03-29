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

    bool ans = false;

    if (nums[0] != nums[1]) ans = true;

    else {
      for (int i = 1; i < n; i++) {
        if (nums[i] % nums[0] != 0) ans = true;
      }
    }

    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
