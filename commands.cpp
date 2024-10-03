#include <iostream>

using namespace std;

int main() {
  int x1 = -100;
  int y1 = 50;
  int z1 = -100;
  int x2 = -75;
  int y2 = 80;
  int z2 = -75;

  string message = "";

  while (y2 < 201) {
    message = "fill " + to_string(x1) + " " + to_string(y1) + " " + to_string(z1) + " " + to_string(x2) + " " + to_string(y2) + " " + to_string(z2) + " air"; 
    cout << message << std::endl;

    if (x2 == 100 && z2 == 100) {
      x1 = -100;
      z1 = -100;
      x2 = -75;
      z2 = -75;
      y1 += 30;
      y2 += 30;
    } else if (x2 == 100) {
      x1 = -100;
      z1 += 25;
      x2 = -75;
      z2 += 25;
    } else {
      x1 += 25;
      x2 += 25;
    }
  }


  return 0;
}
