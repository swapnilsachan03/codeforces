#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int one, two, three;
    cin >> one >> two >> three;

    int c1 = one % 2;
    int c2 = two % 2;
    int c3 = three % 2;

    if ((c1 == 1 && c2 == 1 && c3 == 1) || (c1 == 0 && c2 == 0 && c3 == 0)) {
      cout << 1 << " " << 1 << " " << 1 << endl;
    }

    if ((c1 == 1 && c2 == 0 && c3 == 0) || (c1 == 0 && c2 == 1 && c3 == 1)) {
      cout << 1 << " " << 0 << " " << 0 << endl;
    }

    if ((c1 == 0 && c2 == 1 && c3 == 0) || (c1 == 1 && c2 == 0 && c3 == 1)) {
      cout << 0 << " " << 1 << " " << 0 << endl;
    }

    if ((c1 == 0 && c2 == 0 && c3 == 1) || (c1 == 1 && c2 == 1 && c3 == 0)) {
      cout << 0 << " " << 0 << " " << 1 << endl;
    }
  }
  return 0;
}
