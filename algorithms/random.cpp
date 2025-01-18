#include <bits/stdc++.h>

using namespace std;

int main()
{
  char x;
  ofstream file;
  file.open("otpt.txt");
  x = 1;
  while ((int)x != 0)
  {
    file << static_cast<int>(x) << "   " << x << "\n";
    x++;
  }
  file.close();
}