#include <iostream>
#include <math.h>

using namespace std;

typedef long long int sint;

sint fact(int num){
  sint ret = 1;
  cout << num << endl;
  for (int i = num; i > 1; i -= 1) {
    cout << "  " <<  i << "  " << ret << endl;;
    ret = ret * i;
  }
  return ret;
}

int main (){
  // int n;
  // cin >> n;
  // int numb = pow(fact(n) / pow(n, n), 1 / n);
  cout << fact(20) << endl;
}