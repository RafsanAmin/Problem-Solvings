#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T-- != 0)
  {
    int n, plus = 0, minus = 0;
    string c;
    cin >> n;
    cin >> c;
    for (char i : c)
    {
      if (i == '+')
      {
        plus++;
      }
      else
      {
        minus++;
      }
    }
    cout << abs(plus - minus) << endl;
  }
}