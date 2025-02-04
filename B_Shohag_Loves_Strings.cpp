#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  Points to note:
  
  -> Substrings of length 1 do not qualify, output -1 for string of length 1
  -> For substrings of length 2, if it consists only one character, we can output it right away, else look for another substring
  -> For substrings of length 3, if it has distinct characters, output it, else if first and third characters are same, middle one is different, condition won't be satisfied, look for another substring
  -> For us to not encounter any of the above two type of substrings, the string must be of the type ababababab... which can't satisfy our condition anyways, so output -1
*/

void solve() {
  string s;
  cin >> s;

  int n = s.length();

  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      cout << s.substr(i, 2) << endl;
      return;
    }
  }

  for (int i = 0; i < n - 2; i++) {
    if (
      s[i] != s[i + 1] &&
      s[i + 1] != s[i + 2] &&
      s[i] != s[i + 2]
    ) {
      cout << s.substr(i, 3) << endl;
      return;
    }
  }

  cout << -1 << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
