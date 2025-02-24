#include <bits/stdc++.h>

using namespace std;



int main(){
  int u, v;
  cin >> u >> v;

  vector<vector<int>> adj(u);
  vector<int> in(u, 0);

  for(int i = 0; i < v; i++){
    int a, b;
    cin >> a >> b;
    adj[--a].push_back(--b);
    in[b]++;
  }

  queue<int> todo;
  vector<int> sorted;

  for(int i = 0; i < u; i++){
    if(in[i] > 0) continue;
    todo.push(i);
  }

  while(!todo.empty()){
    int f = todo.front();
    todo.pop();
    sorted.push_back(f);
    for(int x: adj[f]){
      cout << in[x] << " ";
      if(--in[x] == 0)
        todo.push(x);
    }
  }

  cout << sorted.size() << " \n";

  if(sorted.size() != u){
    cout << "IMPOSSIBLE";
  }else{
    for(int x:sorted){
      cout << x + 1  << " ";
    }
  }

}
