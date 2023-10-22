#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    string str;

    cin >> n >> k >> str;

    unordered_map<char, int> mp;
    for(int i = 0; i < n; i++) {
      mp[str[i]] += 1;
    }

    for(int i = 0; i < k; i++) {
      for(auto i : mp) {
        if(i.second % 2 == 1) {
          mp.erase(i.first);
          break;
        }
      }
    }

    int check = 0;
    for(auto i : mp) {
      if(i.second % 2 == 1) check += 1;
    }

    if(check > 1) cout << "NO" << endl;
    else cout << "YES" << endl;
  }

  return 0;
}