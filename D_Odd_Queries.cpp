#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, q;
  cin >> n >> q;

  vi nums(n + 1), pre(n + 1, 0);
  ll sum = 0;

  for (int i = 1; i <= n; i++) {
    cin >> nums[i];
    sum += nums[i];

    pre[i] = pre[i - 1] + nums[i]; 
  }

  for (int i = 0; i < q; i++) {
    int l, r, k;
    cin >> l >> r >> k;

    ll lr_sum = pre[r] - pre[l - 1];
    ll q_sum = sum - lr_sum + (r - l + 1) * k;

    cout << (q_sum & 1 ? " YES" : " NO") << endl;
  }
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
