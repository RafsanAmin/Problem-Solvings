#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  string input;
  cin >> T;

  while (T != 0)
  {
    cin >> input;
    cout << ((int)input[0] - 48) + ((int)input[2] - 48) << endl;
    T--;
  }
}