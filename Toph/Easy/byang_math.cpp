#include <bits/stdc++.h>

using namespace std;

int $(char &S)
{
  return static_cast<int>(S) - 48;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string A, B;
  cin >> A >> B;
  int al = A.length(), bl = B.length();

  for (int i = 1; i <= min(al, bl); i++)
  {
    if ($(A[al - i]) + $(B[bl - i]) >= 10)
    {
      cout << "Yes";
      return 0;
      break;
    }
  }
  cout << "No";
}