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

    for (int i = 0; i < n; i++) {
      cin >> nums[i];

      if (nums[i] < 0) sum += -1 * nums[i];
      else sum += nums[i];
    }

    cout << sum << endl;
  }

  return 0;
}
