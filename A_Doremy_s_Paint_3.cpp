#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n;
  cin >> n;
  
  vi nums(n);
  map<int, int> mp;

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    mp[nums[i]] += 1;
  }

  if (mp.size() == 1) {
    cout << "Yes" << endl;
  }

  else if (mp.size() == 2 && abs(mp.begin()->second - prev(mp.end())->second) < 2) {
    cout << "Yes" << endl;
  }

  else cout << "No" << endl;
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
