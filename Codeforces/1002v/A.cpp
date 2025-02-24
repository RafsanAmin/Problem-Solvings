#include <bits/stdc++.h>

using namespace std;


int main(){
  int t;
  cin >> t;
  while(t--){

    set<int> a, b;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      a.insert(temp);
    }

    for(int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      b.insert(temp);
    }


    if(a.size() * b.size() >= 3){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
  }
}
