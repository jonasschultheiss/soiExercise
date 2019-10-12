#include <soi>

signed main() {
  int n = read_int();
  int sum = 0;
  int a;
  for (int i = 1; i <= n; i++) {
    a = read_int();
    sum += a;
  }
  cout << sum;
}
