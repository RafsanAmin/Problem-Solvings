#include <bits/stdc++.h>

using namespace std;

string ps(int x, char s, bool y)
{
  if (x > 0)
  {
    return to_string(x) + " " + (s == 'O' ? "OVER" : "BALL") + (x > 1 ? "S" : "") + (y ? " " : "");
  }
  return "";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T-- != 0)
  {
    string s;
    int balls = 0, overs = 0;
    cin >> s;
    for (char x : s)
    {
      if (!(x == 'N' || x == 'W' || x == 'D'))
      {
        balls++;
        if (balls == 6)
        {
          balls = 0;
          overs++;
        }
      }
    }
    cout << ps(overs, 'O', true) << ps(balls, 'B', false) << "\n";
  }
}