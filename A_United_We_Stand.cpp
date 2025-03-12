#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve()
{
  int n;
  cin >> n;

  vi nums(n);
  bool x = 1;

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    if (i > 0 && nums[i] != nums[i - 1]) x = 0;
  }

  if (x) {
    cout << -1 << endl;
    return;
  }

  sort(nums.begin(), nums.end());

  int k = 0;

  while (nums[k] == nums[k + 1]) k += 1;

  cout << ++k << " " << n - k << endl;

  for (int i = 0; i < k; i++) cout << nums[i] << " ";
  cout << endl;
  for (int i = k; i < n; i++) cout << nums[i] << " ";
  cout << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
