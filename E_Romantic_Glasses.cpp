#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define pii vector<pair<int, int>>

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vi nums(n);

    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      if (i % 2 == 1) nums[i] *= -1;
    }

    map<long long, long long> mp;
    mp[0] = 1;

    long long prefix = 0;
    bool flag = false;

    for (int i = 0; i < n; i++) {
      prefix += nums[i];

      if (mp[prefix]) {
        flag = true;
        break;
      }

      mp[prefix] += 1;
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
