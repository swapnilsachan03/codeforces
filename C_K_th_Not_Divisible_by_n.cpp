#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    long long n, k;
    cin >> n >> k;

    long long quo = k / (n-1);
    long long rem = k % (n-1);
    long long ans = quo * n + rem;

    if (rem == 0) ans--;
    cout << ans << endl;
  }

  return 0;
}
