#include <fstream>
#include <iostream>
using namespace std;

int main() {
  fstream input("input.txt");
  int i = 0, floor = 0, firstBasementPosition = -1;
  char c;

  while (input >> std::noskipws >> c) {
    i += 1;
    if (c == '(') {
      floor += 1;
    } else {
      floor -= 1;
    }

    if (firstBasementPosition == -1 && floor == -1) {
      firstBasementPosition = i;
    }
  }

  cout << "floor: " << floor << endl;
  cout << "first position causing basement: " << firstBasementPosition << endl;

  input.close();
}