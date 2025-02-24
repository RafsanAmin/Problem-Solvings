#include <bits/stdc++.h>

using namespace std;


const int MX = 1e6;

vector<int> occ(MX+1, 0);

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      occ[temp]++;
    }

    int gcd = MX;

    while(gcd > 0){
      int cnt = 0;
      for(int g = gcd; g <= MX; g+=gcd)
        cnt += occ[g];

      if(cnt > 1)
        break;

      gcd--;
    }

    cout << gcd;

}
