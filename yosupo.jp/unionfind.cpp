#include <bits/stdc++.h>

using namespace std;

const int MAX = 1E6;

vector<int> parent(MAX+1, -1);
vector<int> size_p(MAX+1, 0);

void insert_dsu(int v){
    parent[v] = v;
    size_p[v] = 1;
}

int find_dsu(int v){
  if(parent[v] == v) return v;

  return parent[v] = find_dsu(parent[v]);
}

void merge_dsu(int u, int v){
  int a = find_dsu(u);
  int b = find_dsu(v);

  if(size_p[a] < size_p[b])
    swap(a,b);

  size_p[a] += size_p[b];
  parent[b] = a;
}

bool con(int u, int v){
  return find_dsu(u) == find_dsu(v);
}

int main(){
  int N, Q;
  cin >> N >> Q;

  for(int i = 0; i < N; i++)
    insert_dsu(i);

  for(int i = 0; i < Q; i++){
    int q;
    cin >> q;
    int a, b; cin >> a >> b;

    if(q == 0){
      merge_dsu(a, b);
    }else{
      cout << con(a, b) << "\n";
    }
  }
}
