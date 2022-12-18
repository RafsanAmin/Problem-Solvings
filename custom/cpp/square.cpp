#include <iostream>

using namespace std;

int main(){
  int a, i, j;
  cout << "How long length?:  ";
  cin >> a;
  cout << endl << "-------------------" << endl;
  for(i = a; i >= 1; i--){
    if(i == a || i == 1){
      for(j = a; j >= 1; j--){
        cout << "#" ;
      }
    }
    else{
      for(j = a; j >= 1; j--){
        if(j== a || j == 1){
          cout << "#";
        }
        else{
          cout << " ";
        }
      }
    }
    cout << endl;
  }
}