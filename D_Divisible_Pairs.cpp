/*  (a + b) % x = 0 => (a % x + b % x) % x = 0
=>  a % x + b % x is either 0 or multiple of x, i.e. a % x = (x - b % x) % x

    (a - b) % y = 0 => a % y - b % y = 0 => a % y = b % y
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    map<pair<int, int>, int> mp;
    long long ans = 0;

    for (auto it : nums) {
      auto pr = make_pair((x - it % x) % x, it % y);

      if (mp.find(pr) != mp.end()) ans += mp[pr];
      mp[{ it % x, it % y }] += 1;
    }

    cout << ans << endl;
  }

  return 0;
}
