#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    
    map<int, int> sides;
    int x = 0;

    for (int i = 0; i < n; i++) {
      cin >> x;
      sides[x] += 1;
    }

    int sum = 0;
    long long ans = 0;

    for (auto it : sides) {
      long long cnt = it.second;

      if (cnt >= 3) ans += cnt * (cnt - 1) * (cnt - 2) / 6;
      if (cnt >= 2) ans += sum * cnt * (cnt - 1) / 2;

      sum += cnt;
    }

    cout << ans << endl;
  }

  return 0;
}
