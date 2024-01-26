#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int a, b;
  cin >> a >> b;

  if (m * a > b) {
    int singles = (n % m) * a;

    if (singles > b) cout << (n / m) * b + b;
    else cout << (n / m) * b + singles;
  }

  else cout << n * a;

  return 0;
}
