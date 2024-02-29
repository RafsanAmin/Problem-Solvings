#include <bits/stdc++.h>

using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int num, end;

  cin >> num;

  if (num != 1)
    cout << "1\n";

  if (num % 2 == 0)
    cout << "2\n";

  if (num > 2)
  {
    for (int j = 3; j <= (num / 2); j++)
    {
      if (num % j == 0)
      {
        cout << j << "\n";
      }
    }
  }

  cout << num << endl;
}