#include <bits/stdc++.h>

using namespace std;

vector<string> grid(1000);
bool visited[1000][1000];
char instructions[1000][1000];

int XS[4] = {-1, 0, 1, 0};
int YS[4] = {0, -1, 0, 1};
char inst[4] = {'U', 'L', 'D', 'R'};
int main()
{
  int n, m;
  bool possible = false;
  string ins;
  cin >> n >> m;
  int A[2], B[2] = {0,0};

  for (int i = 0; i < n; i++)
  {
    cin >> grid[i];
    for (int j = 0; j < m; j++)
    {
      if (grid[i][j] == 'A')
      {
        A[0] = i, A[1] = j;
      }
    }
  }

  queue<pair<int, int>> todo;
  todo.push({A[0], A[1]});

  while (!todo.empty())
  {
    int XX = todo.front().first;
    int YY = todo.front().second;
    todo.pop();

    for (int l = 0; l < 4; l++)
    {
      int x = XX + XS[l], y = YY + YS[l];


      if(x < 0 || y < 0 || x >= n || y >= m ){
        possible = true;
        if(x<0) B[1] = y;
        else if(y<0) B[0] = x;
        else if(x>=n) { B[0] = n-1;  B[1] = y;  }
        else if(y>=m) { B[0] = x  ;  B[1] = m-1;  }
        break;
      }

      if (grid[x][y] == '#' || grid[x][y] == 'M' || visited[x][y])
        continue;

      visited[x][y] = true;

      todo.push({x, y});
      instructions[x][y] = inst[l];
    }

    if (possible == true)
    {
      break;
    }
  }

  if (possible)
  {
    int x = B[0], y = B[1];
    while (grid[x][y] != 'A')
    {
      ins.push_back(instructions[x][y]);
      switch (instructions[x][y])
      {
      case 'L':
        y++;
        break;
      case 'U':
        x++;
        break;
      case 'R':
        y--;
        break;
      case 'D':
        x--;
        break;
      }
    }

    reverse(ins.begin(), ins.end());
    cout << "YES\n"
         << ins.size() << "\n"
         << ins;
  }
  else
  {
    cout << "NO";
  }
}
