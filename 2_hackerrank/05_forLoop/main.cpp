#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  for (int i = a; i <= b; i++)
  {
    if (i > 9)
      i % 2 == 0 ? cout << "even" << endl : cout << "odd" << endl;
    else
      cout << numbers[i - 1] << endl;
  }

  return 0;
}
