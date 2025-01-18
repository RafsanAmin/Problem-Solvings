#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, round = 1;
  cin >> n;
  vector<int> number(n);

  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    number[temp - 1] = i;
  }

  for (int i = 0; i < n - 1; i++)
  {

    if (number[i] > number[i + 1])
    {
      round++;
    }
  }

  cout << round;
}