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
    // write your code here
    float x;
    cin >> x;

    if (x <= 1)
    {
      cout << "0 days\n";
    }
    else
    {
      cout << ceil(log2(x)) << " days\n";
    }
  }
}