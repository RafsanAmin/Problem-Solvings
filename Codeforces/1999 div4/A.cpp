#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    string s;
    cin >> s;
    cout << static_cast<int>(s[0]) + static_cast<int>(s[1]) - '0' - '0' << "\n";
  }
}