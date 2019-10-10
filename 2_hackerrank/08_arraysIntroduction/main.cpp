#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int numberArrLength;
  cin >> numberArrLength;
  int numberArr[numberArrLength];
  for (int i = 0; i < numberArrLength; i++)
  {
    cin >> numberArr[i];
  }

  reverse(numberArr, numberArr + numberArrLength);

  for (int i = 0; i < numberArrLength; i++)
  {
    cout << numberArr[i] << " ";
  }

  return 0;
}
