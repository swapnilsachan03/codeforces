#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp) {
  int res = 1;
  for (int i = 0; i < exp; i++) res *= base;
  return res;
}

int main()
{
  float t;
  cin >> t;

  while (t--) {
    int a, b, l;
    cin >> a >> b >> l;

    if (l % a != 0 && l % b != 0) {
      cout << 1 << endl;
      continue;
    }

    unordered_set<int> st;

    for (int x = 0; ; x++) {
      int pa = power(a, x);

      if (pa > l) break;

      for (int y = 0; ; y++) {
        int pb = power(b, y);

        long long value = pa * pb;
        if (value > l) break;

        if (l % value == 0) st.insert(l / value);
      }
    }

    cout << st.size() << endl;
  }

  return 0;
}
