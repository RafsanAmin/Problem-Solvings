#include <bits/stdc++.h>

using namespace std;


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    map<int, int> val;
    cin >> n;


    for(int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      val[temp]++;
    }

    bool ans = true;

    for(int i = 1000; i > 0; i--){
      if(val[i] != 0 && val[i] % 2 == 1){
        bool f = false;
        for(int j = i-1; j > 0; j--){
          if(val[j] - 2 * (i - j) >= 1){
            val[j] -= (i - j);
            f = true;
            break;
          }else{
            val[j] = 0;
          }
        }
        ans = f;
      }
    }

    if(ans){
      cout << "Yes\n";
    }else{
      cout << "No\n";
    }
  }
}
