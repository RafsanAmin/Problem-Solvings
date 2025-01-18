#include <bits/stdc++.h>

using namespace std;

int N, M;
int answer;

vector<vector<int>> zero;
vector<int> bestPath;
vector<int> path;
bool visited[1000][1000] = {};

int traverse(int R, int C, int prev, vector<vector<int>> &matrix)
{
  if (R < 0 || C < 0 || R > M - 1 || C > N - 1)
  {
    return -1;
  }
  else if (visited[R][C] || matrix[R][C] == -1)
  {
    return -1;
  }

  if (R == M - 1 && C == N - 1)
  {
    path.push_back(matrix[R][C]);
    answer = max(answer, prev + matrix[M - 1][N - 1]);
    if (prev + matrix[M - 1][N - 1] == max(answer, prev + matrix[M - 1][N - 1]))
    {
      bestPath = path;
    }
    return 0;
  }

  else
  {
    visited[R][C] = true;
    path.push_back(matrix[R][C]);
    traverse(R, C + 1, prev + matrix[R][C], matrix);
    traverse(R + 1, C, prev + matrix[R][C], matrix);
    path.pop_back();
    visited[R][C] = false;
  }
  return -1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {

    vector<vector<int>> matrix;
    cin >> M >> N;
    answer = 0;
    for (int i = 0; i < M; i++)
    {
      vector<int> row;
      for (int j = 0; j < N; j++)
      {
        int temp;
        cin >> temp;
        row.push_back(temp);
      }
      matrix.push_back(row);
    }

    int l = traverse(0, 0, 0, matrix);

    cout << "Case " << t << ": " << (answer == 0 ? -1 : answer) << "\n";
    for (int x : bestPath)
    {
      cout << x << " ";
    }
    cout << (answer == 0 ? "" : "\n");
  }
}