#include <soi>

signed main() {
  int a,b;
  cin >> a >> b;
  if (a>b) {
    cout << ">";
  } else if (a<b) {
    cout << "<";
  } else {
    cout << "=";
  }
}