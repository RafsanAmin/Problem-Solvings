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
    long long int n, a, b, c, days, rem;
    cin >> n >> a >> b >> c;
    days = (n / (a + b + c)) * 3;
    rem = n % (a + b + c);
    if (rem == 0)
    {
    }
    else if (rem - a <= 0)
      days++;
    else if ((rem - a - b <= 0))
      days += 2;
    else
      days += 3;

    cout << days << "\n";
  }
}