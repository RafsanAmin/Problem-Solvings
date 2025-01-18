#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, round = 1;
  cin >> n >> m;
  vector<int> number(n);
  vector<int> index(n);
  bitset<10000000> rc;

  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    number[temp - 1] = i;
    index[i] = temp - 1;
  }

  for (int i = 0; i < n - 1; i++)
  {

    if (number[i] > number[i + 1])
    {
      round++;
      rc[i].flip();
    }
  }

  for (int i = 0; i < m; i++)
  {
    int p1, p2, n1, n2, temp;
    cin >> p1 >> p2;

    n1 = index[p1 - 1], n2 = index[p2 - 1];

    index[p1 - 1] = n2;
    index[p1 - 1] = n1;
    number[n1 - 1] = p2;
    number[n2 - 1] = p1;
  }

  cout << round;
}