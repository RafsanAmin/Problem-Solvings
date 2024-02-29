#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double num;
  cin >> num;

  cout << "[";
  for (int i = 1; i <= (num / 10); i++)
  {
    cout << "+";
  }
  for (int i = 1; i <= 10 - floor(num / 10); i++)
  {
    cout << ".";
  }
  cout << "] " << floor(num) << "%" << endl;
  ;
}
