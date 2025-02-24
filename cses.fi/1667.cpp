#include<bits/stdc++.h>

using namespace std;




int main(){
  int u, v;

  cin >> u >> v;

  vector<vector<int>> graph(u);
  vector<bool> visited(u);
  vector<int> prev(u);

  for(int i = 0; i < v; i++){
      int a, b;
      cin >> a >> b;

      graph[--a].push_back(--b);
      graph[b].push_back(a);
  }

  queue<int> todo;
  bool done = false;

  todo.push(0);
  visited[0] = true;

  while(!todo.empty()){
    int top = todo.front();
    todo.pop();

    if(top == u-1)
      done = true;


    for(int i: graph[top]){

      if(visited[i]) continue;

      visited[i] = true;
      prev[i] = top;
      todo.push(i);
    }
  }

  if(done){
    int i = u - 1;
    vector<int> path;
    path.push_back(i);

    while(i != 0){

      i = prev[i];
      path.push_back(i);
    }
    cout << path.size() << "\n";
    for(int j = path.size() - 1; j >= 0; j--){
      cout << path[j]+1 << " ";
    }
  }else{
    cout << "IMPOSSIBLE";
  }



}
