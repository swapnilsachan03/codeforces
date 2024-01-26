#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  int x = 0, y = 0, z = 0;

  while (t--) {
    int m, n, o;
    cin >> m >> n >> o;

    x += m;
    y += n;
    z += o;
  }

  if(x == 0 && y == 0 && z == 0) {
    cout << "YES";
  }
  else cout << "NO";

  return 0;
}