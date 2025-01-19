#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, k;
  cin >> n >> k;

  vi nums(n);
  map<int, int> mp;

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    mp[nums[i]] += 1;
  }

  int ans = 0;

  for (auto it : mp) {
    if (mp.find(k - it.first) != mp.end()) {
      if (k - it.first == it.first) {
        if (it.second >= 2) {
          ans += it.second;
        }
      } else {
        ans += min(it.second, (*mp.find(k - it.first)).second);
      }
    }
  }

  cout << max(0, ans / 2) << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
