#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<int> nums(n), arr(m);

    for (int i = 0; i < n; i++) cin >> nums[i];
    for (int i = 0; i < m; i++) cin >> arr[i];

    sort(nums.begin(), nums.end());
    sort(arr.begin(), arr.end(), greater<int>());

    long long ans = 0;

    for (int i = 0; i < n; i++){
			ans += max(abs(nums[i] - arr[m - n + i]), abs(nums[i] - arr[i]));
		}

    cout << ans << endl;
  }

  return 0;
}
