#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

void print(auto x)
{
  cout << x << endl;
}

int joinNumber(vector<int> &arr)
{
  int total = 0;
  int size = arr.size() - 1;

  for (int i = 0; i <= size; i++)
  {
    total += (arr[i] * pow(10, size - i));
    print(total);
  }
  return total;
}

int main()
{
  vector<int> numbers({5, 2, 2, 2, 1});

  cout << endl
       << joinNumber(numbers) << endl;
}