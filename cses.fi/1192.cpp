#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<string> grid;

bool visited[1000][1000];

void dfs(int x, int y, char c){
  if(x < 0 || y < 0 || x >= n || y >= m || grid[x][y] != c  || visited[x][y])
    return;

  visited[x][y] = true;
  dfs(x+1, y, c);
  dfs(x, y+1, c);
  dfs(x-1, y, c);
  dfs(x, y-1, c);
}

int main(){

  int cnt= 0;
  cin >> n >> m;

  grid.resize(n);

  for(int i = 0; i < n; i++){
    cin >> grid[i];
  }



  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(!visited[i][j] && grid[i][j] == '.'){
        cnt++;
        dfs(i, j, '.');
      }
    }
  }

  cout << cnt;
}
