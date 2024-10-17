#include "main.cpp"
#include "repeatOperation.cpp"
#include "userInteraction.cpp"

void repeatOperation() {
  cout << "Would you like to repeat this operation? (y/n)" << endl;
  cin >> countOption;
  if (countOption == "y") {
    count = 0;
    counter = 0;
    countOption = "";
    userInteraction();
  } else if (countOption == "n") {
    cout << "Thank you for using this program." << endl;
  } else {
    cout << "Invalid input. Please try again." << endl;
    countOption = "";
    repeatOperation();
  }
  return 0;
}
