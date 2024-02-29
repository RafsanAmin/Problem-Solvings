#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int length, before, current;

  cin >> length;
  cin >> before;

  for (int i = 1; i < length; i++)
  {
    cin >> current;
    if (current < before)
    {
      cout << "No";
      return 0;
      break;
    }
    before = current;
  }
  cout << "Yes";
}