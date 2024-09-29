#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, m;
  cin >> n >> m;

  vi nums (n);
  vector<pair<char, pii>> ops (m);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> ops[i].first;
    cin >> ops[i].second.first >> ops[i].second.second;
  }

  auto mx = max_element(nums.begin(), nums.end());

  for (auto it : ops) {
    if (it.second.first <= *mx && it.second.second >= *mx) {
      if (it.first == '+') *mx += 1;
      if (it.first == '-') *mx -= 1;
    }

    cout << *mx << " ";
  }

  cout << endl;
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
