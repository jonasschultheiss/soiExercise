#include <soi>

signed main() {
  int n = read_int();
  for (int i = 1; i<=n;i++) {
    if (i%3 == 0 && i%5 == 0)
      cout << "FizzBuzz" << "\n";
    else if (i%3 == 0) 
      cout << "Fizz" << "\n";
    else if (i%5 == 0) 
      cout << "Buzz" << "\n";
    else 
      cout << i << "\n";
  }
}
