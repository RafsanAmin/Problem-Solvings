#include <bits/stdc++.h>

using namespace std;

void printG(vector<vector<int>> &x)
{
  for (vector<int> y : x)
  {
    for (int z : y)
    {
      cout << z << " ";
    }
    cout << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y, a;

  cin >> x >> y;

  vector<vector<int>> grid(x, vector<int>(y, 0));

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      cin >> grid[i][j];
    }
  }

  cin >> a;
  for (int k = 0; k < a; k++)
  {
    int r, c, temp;
    cin >> r >> c;

    temp = grid[r][c - 1];

    grid[r][c - 1] = grid[r + 1][c - 1];
    grid[r + 1][c - 1] = grid[r + 1][c];
    grid[r + 1][c] = grid[r + 1][c + 1];
    grid[r + 1][c + 1] = grid[r][c + 1];
    grid[r][c + 1] = grid[r - 1][c + 1];
    grid[r - 1][c + 1] = grid[r - 1][c];
    grid[r - 1][c] = grid[r - 1][c - 1];
    grid[r - 1][c - 1] = temp;

    printG(grid);
  }
}