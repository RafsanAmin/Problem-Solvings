#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;

int main(){
  ll u, v;
  cin >> u >> v;
  vector<vector<pair<ll, ll>>> graph(u);

  for(int i = 0; i < v; i++){
    ll a, b, w;
    cin >> a >> b >> w;
    graph[--a].push_back({--b, w});
  }

  vector<ll> dist(u, 1E18+7);
  priority_queue<pair<ll, ll>> pq;
  dist[0] = 0;
  pq.push({0,0});

  while(!pq.empty()){
    pair<ll, ll> top = pq.top();
    pq.pop();

    if(-top.first != dist[top.second]) continue;

    for(pair<ll, ll> &nxt: graph[top.second]){
      if(dist[top.second] + nxt.second < dist[nxt.first]){
        dist[nxt.first] = dist[top.second] + nxt.second;
        pq.push({-dist[nxt.first], nxt.first});
      }

    }

  }

  for (int i = 0; i < u - 1; i++) { cout << dist[i] << ' '; }
	cout << dist[u - 1] << endl;
}
