#include <bits/stdc++.h>

using namespace std;


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int a, b, c=0;
    bool k = false;
    cin >> a >> b;
    if(b-a == 1){
      cout << "YES" << "\n";
    }
    else if(a > b){

      while(a - b - 9 *c >= -1){
        if(a - b - 9 * c == -1)
          k = true;

        c++;
      }

      if(!k){
        cout << "NO" << "\n";
      }else{
        cout << "YES" << "\n";
      }

    }else{
              cout << "NO" << "\n";
    }
  }
}
