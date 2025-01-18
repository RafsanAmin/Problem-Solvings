#include <bits/stdc++.h>

using namespace std;

int solCounter = 1;
vector<int> row(20);
vector<int> col(20);
vector<int> diag1(40);
vector<int> diag2(40);

void nQueen(int at, int n, ofstream &FILE)
{
  if (at == n)
  {
    FILE << solCounter++ << ".\n";
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
        FILE << (row[i] == j ? "X " : ". ");
      FILE << "\n";
    }
    FILE << "\n\n";
  }

  for (int i = 0; i < n; i++)
  {
    if (col[i] || diag1[i + at] || diag2[n + i - at])
      continue;

    row[at] = i;

    col[i] = diag1[i + at] = diag2[n + i - at] = 1;
    nQueen(at + 1, n, FILE);
    col[i] = diag1[i + at] = diag2[n + i - at] = 0;
    row[at] = 0;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ofstream FILE;
  FILE.open("otpt.txt");

  nQueen(0, 8, FILE);
}