#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Series
{
public:
  double a;
  double d;
  enum Type
  {
    Arithmetic = 1,
    Geometric = 2,
  };
  Type t;

  Series(double initValue, double interval, Type type)
  {
    a = initValue;
    d = interval;
    t = type;
  }
  double getTotal()
  {
    return t == 2 && (abs(d) < 1) ? (a / (1 - d)) : 0;
  }

  double getNthElem(int n)
  {
    return t == 1 ? a + (n - 1) * d
                  : a * pow(d, n - 1);
  }

  double getNthTotal(int n)
  {
    return t == 1 ? (n / 2) * (2 * a + (n - 1) * d)
                  : (a * (pow(d, n) - 1)) / (d - 1);
  }
  string printTillN(int n)
  {
    string ret = "";

    for (int i = 1; i <= n; i++)
    {
      ret += (to_string(getNthElem(i)) + " + ");
    }
    return ret;
  }
};

class FibonacciSeries
{
public:
  const double sqrtF = sqrt(5);
  const double PHI = (1 + sqrtF) / 2;
  int getNthElem(int n)
  {
    return (pow(PHI, n) - pow(1 - PHI, n)) / sqrtF;
  }

  int getNthTotal(int n)
  {
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      ans += getNthElem(i);
    }
    return ans;
  }
  string printTillN(int n)
  {
    string ret = "";
    for (int i = 0; i < n; i++)
    {
      ret += (to_string(getNthElem(i)) + " + ");
    }
    return ret;
  }
};

int main()
{
  FibonacciSeries s1;

  cout << s1.printTillN(50) << endl;
  system("pause");
}