#include "main.cpp"
#include "repeatOperation.cpp"
#include "userInteraction.cpp"

void logic() {
  for (counter = 0; counter <= count; counter ++) {
    numList.push_back(counter);
    cout << counter << endl;
  }
  if (listOption == "y") {
    cout << numList << endl;
    repeatOperation();
  } else if (listOption == "n") {
    repeatOperation();
  }
  return 0;
}
