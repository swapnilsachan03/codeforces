#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, count = 0;
  cin >> n;

  int p, v, t;
  for(int i = 0; i < n; i++) {
    cin >> p >> v >> t;

    int curr = 0;
    if(p == 1) curr += 1;
    if(v == 1) curr += 1;
    if(t == 1) curr += 1;

    if(curr >= 2) count += 1;
  }

  cout << count;

  return 0;
}