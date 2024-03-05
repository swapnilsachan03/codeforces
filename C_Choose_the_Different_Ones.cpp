#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int m, n, k;
    cin >> m >> n >> k;

    int num;
    set<int> a, b, c;
    
    for (int i = 0; i < m; i++) {
      cin >> num;

      if (num <= k) {
        a.insert(num);
        c.insert(num);
      }
    }

    for (int i = 0; i < n; i++) {
      cin >> num;

      if (num <= k) {
        b.insert(num);
        c.insert(num);
      }
    }

    if (c.size() == k && 2 * a.size() >= k && 2 * b.size() >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
