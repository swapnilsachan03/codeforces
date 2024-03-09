/* gcd(a, b, c, ..., k) = gcd(a, a+b, a+b+c, ..., sum till k)
   
  -> If the sum of all sub problems' ratings is x, the final answer will always be a divisor of x
  -> Consider a factor d of x, then if d * n <= x, then we can choose the difficulties of sub-problems such that each of them is a multiple of d
  -> We have to find the maximum d for which this condition is true, in TC = sqrt(n)
*/

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
    int x, n;
    cin >> x >> n;

    int ans = 1;

    for (int i = 1; i * i <= x; i++) {
      if (x % i == 0) {
        if (n <= x / i) ans = max(ans, i);
        if (n <= i) ans = max(ans, x / i);
      }
    }

    cout << ans << endl;
  }

  return 0;
}
