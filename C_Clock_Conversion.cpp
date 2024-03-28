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
    string s;
    cin >> s;

    string hour = s.substr(0, 2);
    string min = s.substr(3);

    if (hour == "00") {
      cout << "12" << ":" << min << " AM" << endl;
      continue;
    }

    int hr = stoi(hour);

    bool pm = hr >= 12;
    if (hr >= 13) hr = hr - 12;

    hour = to_string(hr);
    if (hour.length() == 1) hour = "0" + hour;

    cout << hour << ":" << min;
    
    if (pm) cout << " PM" << endl;
    else cout << " AM" << endl;
  }

  return 0;
}
