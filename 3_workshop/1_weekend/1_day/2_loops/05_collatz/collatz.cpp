#include <soi>

signed main() {
  int k = read_int();
  int steps = 0;
  while (k != 1) {
    k%2 == 0 ? k = k/2 : k = 3*k+1;
    ++steps;
  }
  cout << steps;
}
