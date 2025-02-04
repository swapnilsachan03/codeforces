#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  ll n, k;
  cin >> n >> k;

  int num;
  map<ll, int> mp;

  for (int i = 0; i < n; i++) {
    cin >> num;
    mp[num] += 1;
  }

  multiset<int> mst;

  for (auto it : mp) {
    mst.insert(it.second);
  }

  int ans = mst.size();

  for (int a : mst) {
    if (k >= a) {
      ans -= 1;
      k -= a;
    }
  }

  cout << max(1, ans) << endl;
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
