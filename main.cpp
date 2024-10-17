#include <iostream>
#include <string>
#include <list>
#include "logic.cpp"
#include "repeatOperation.cpp"
#include "userInteraction.cpp"
using namespace std;

long count = 0;
long counter = 0;
list<long> numList;
string countOption = "";
string listOption = "";

int main() {
  while (countOption == "y" || countOption == "") {
    userInteraction();
    repeatOperation();
  }
  return 0;
}
