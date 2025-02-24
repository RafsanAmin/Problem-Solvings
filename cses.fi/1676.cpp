#include <bits/stdc++.h>

using namespace std;

const int MAX = 1E6;

int totalroad = 0;
vector<int> parent(MAX+1, -1);
vector<int> size_p(MAX+1, 0);
multiset<int> sizes;

void insert_dsu(int v){
    parent[v] = v;
    size_p[v] = 1;
    sizes.insert(1);
}

int find_dsu(int v){
  if(parent[v] == v) return v;

  return parent[v] = find_dsu(parent[v]);
}

void merge_dsu(int u, int v){
  int a = find_dsu(u);
  int b = find_dsu(v);


  if(a == b) return;

  if(size_p[a] < size_p[b])
    swap(a,b);


  sizes.erase(sizes.find(size_p[a]));
  sizes.erase(sizes.find(size_p[b]));

  size_p[a] += size_p[b];




  sizes.insert(size_p[a]);


  totalroad--;
  parent[b] = a;
}

bool con(int u, int v){
  return find_dsu(u) == find_dsu(v);
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, Q;
  cin >> N >> Q;

  totalroad = N;

  for(int i = 0; i < N; i++)
    insert_dsu(i+1);

  for(int i = 0; i < Q; i++){
    int a, b; cin >> a >> b;
    merge_dsu(a, b);

    cout << totalroad << " " << *prev(sizes.end()) << "\n";
  }
}
