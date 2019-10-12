#include <soi>

signed main() {
  int steps = 0;
  int p = 1;
  int x, y;
  cin >> x >> y;
  int coordinates[2] = {
    0,
    0
  };
  int point[2] = {
    x,
    y
  };
  bool shouldLoop = true;
  while (shouldLoop) {
    if (coordinates[0] == point[0] && coordinates[1] == point[1]) {
      cout << steps;
      shouldLoop = false;
    } else if (coordinates[0] > point[0] && coordinates[1] > point[1]) {
      cout << "Never";
      shouldLoop = false;
    } else {
      steps++;
      if (p == 1) {
        coordinates[0] += 1;
        coordinates[1] += 1;
        p = 2;
      } else if (p == 2) {
        coordinates[0] += 1;
        coordinates[1] -= 1;
        p = 3;
      } else if (p == 3) {
        coordinates[0] += 1;
        coordinates[1] += 1;
        p = 4;
      } else if (p == 4) {
        coordinates[0] -= 1;
        coordinates[1] += 2;
        p = 1;
      }
    }
  }
}