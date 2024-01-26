#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    char cells[n], state[n];
    for (int i = 0; i < n; i++) {
      cin >> cells[i];
      if (cells[i] == '#') state[i] = 'b';
      else state[i] = 'e';
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
      if (i < n - 2 && cells[i] == '.' && cells[i+1] == '.' && cells[i+2] == '.') {
        ans = 2;
        break;
      }

      if (i < n - 1 && cells[i] == '.' && cells[i+1] == '.') {
        ans += 2;
        i += 1;
      }

      else if (cells[i] == '.') {
        ans += 1;
      }

      else continue;
    }

    cout << ans << endl;
  }

  return 0;
}