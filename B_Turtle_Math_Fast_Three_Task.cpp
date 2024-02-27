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
    int sum = 0;

    bool modOne = false;

    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      sum += nums[i];

      if (nums[i] % 3 == 1) modOne = true;
    }

    int mod = sum % 3;

    if (mod == 0) cout << 0 << endl;

    else if (mod == 1) {
      if (modOne) cout << 1 << endl;
      else cout << 2 << endl;
    }

    else cout << 1 << endl;
  }

  return 0;
}
