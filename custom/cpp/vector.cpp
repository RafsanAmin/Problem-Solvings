#include <bits/stdc++.h>
using namespace std;

class Vector
{
public:
  float x, y;
  Vector(float X, float Y)
  {
    x = X, y = Y;
  };
  void add(Vector &vec)
  {
    x += vec.x;
    y += vec.y;
  }
  void print()
  {
    cout << "x= " << x << ", y=" << y << endl;
  }
};

template <typename T>
void printV(vector<T> &arr)
{
  cout << endl;
  for (int x : arr)
  {
    cout << x;
  }
  cout << endl;
}

int main()
{

  vector<char> a({'c', 'c', 'c'});

  for (int x : a)
  {
    a[1] = 'j';
  }

  printV<char>(a);
}