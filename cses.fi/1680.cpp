#include <bits/stdc++.h>

using namespace std;



int main(){
  int u, v;
  cin >> u >> v;

  vector<vector<int>> in(u);
  vector<vector<int>> out(u);
  vector<int> in_deg(u, 0);

  for(int i = 0;  i < v; i++){
    int a, b;
    cin >> a >> b;
    out[--a].push_back(--b);
    in[b].push_back(a);
    in_deg[b]++;
  }

  queue<int> todo;

  for(int i = 0; i < u; i++){
    if(in_deg[i] == 0)
      todo.push(i);
  }

  vector<int> sorted;

  while(!todo.empty()){
    int f = todo.front();
    todo.pop();
    sorted.push_back(f);
    for(int x: out[f]){
      if(--in_deg[x] == 0){
        todo.push(x);
      }
    }
  }

  vector<int> dp(u, INT32_MIN);
  vector<int> pa(u, -1);

  dp[0] = 1;

  for(int j = 0; j < sorted.size(); j++){
    int i = sorted[j];
    for(int prev: in[i]){
      if(dp[prev] + 1 > dp[i]){
        dp[i] = dp[prev] + 1;
        pa[i] = prev;
      }
    }
  }




  if(dp[u-1] < 0){
    cout << "IMPOSSIBLE";
  }else{
     int p = u - 1;
    vector<int> path;

    path.push_back(p);

    while(pa[p] != -1){
      path.push_back(pa[p]);
      p = pa[p];
    }

    reverse(path.begin(), path.end());
    cout << path.size() << "\n";
    for(int x: path){
      cout << x +1  << " ";
    }
  }
}
