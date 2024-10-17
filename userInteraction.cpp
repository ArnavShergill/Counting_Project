#include "main.cpp"
#include "logic.cpp"
#include "repeatOperation.cpp"

void userInteraction() {
  cout << "What number should I count up to?" << endl;
  cin >> count;
  cout << "Would you like the numbers in a list format? (y/n)" << endl;
  cin >> listOption;
  logic();
  return 0;
}
