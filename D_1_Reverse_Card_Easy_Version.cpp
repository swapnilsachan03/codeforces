#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

int main()
{
  int t;
  cin >> t;

  while (t--) {
    long long n, m;
    cin >> n >> m;

    long long res = -1;

    for (long long i = 1; i <= m; i++) {
      res += (n + i) / (i * i);
    }
   
    cout << res << "\n";
  }

  return 0;
}
