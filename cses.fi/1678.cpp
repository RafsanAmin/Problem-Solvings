#include <bits/stdc++.h>

using namespace std;

const int MAX = 1E6;

vector<vector<int>> adj(MAX);
vector<bool> visited(MAX);
vector<bool> on_stack(MAX);
vector<int> cycle;

bool dfs(int n){
  visited[n] = on_stack[n] = true;

  for(int ad: adj[n]){
      if(on_stack[ad]){
        on_stack[ad] = on_stack[n] =  false;
        cycle.push_back(ad);
        cycle.push_back(n);
        return true;
      }else if(!visited[ad]){
        if(dfs(ad)){
          if(on_stack[n]){
            on_stack[n] = false;
            cycle.push_back(n);
            return true;
          }else{
            cycle.push_back(n);
            return false;
          }
        }

        if(!cycle.empty())
        {
          return false;
        }
      }
  }

  on_stack[n] = false;
  return false;
}


int main(){
  int u, v;
  cin >> u >> v;


  for(int i = 0; i < v; i++){
    int a, b;
    cin >> a >> b;
    adj[--a].push_back(--b);
  }

  for(int i = 0; cycle.empty() && (i < u); i++) dfs(i);


  if(cycle.empty()){

    cout << "IMPOSSIBLE";
  }else{
    cout << cycle.size() << "\n";

    reverse(cycle.begin(), cycle.end());

    for(int x: cycle){
      cout << x + 1  << " ";
    }
  }

}
