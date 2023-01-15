#include <bits/stdc++.h>

using namespace std;

int main()
{

  int sA, hA, sB, hB, A, B;

  cin >> sA >> hA;
  cin >> sB >> hB;

  A = min(sA, hA);
  B = min(sB, hB);

  if (A > B)
  {
    cout << "Alice" << endl;
  }
  else if (A < B)
  {
    cout << "Bob" << endl;
  }
  else
  {
    cout << "Tie" << endl;
  }

  return 0;
}