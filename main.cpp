#include "MenuOptions.h"
#include "fstream"
#include <fstream>

int main() {
  using namespace std;
  MenuOptions menu;

  vector<string> content;
  string line = "";
  string userChoice = "";
  bool shouldRun = true;

  // open the file
  ifstream file("CS210_Project_Three_Input_File.txt", ios::app);
  // check if file is opened
  if (!file.is_open()) {
    cerr << "Unable to open the file" << endl;
    return 1;
  }
  // collect the files contents
  while (getline(file, line)) {
    content.push_back(line);
  }
  file.close();

  // populate the class attribute foodNameCountMap
  menu.populateFoodItems(content);
  menu.countFoodItems(content);
  map<string, unsigned int> foodNameCountMap = menu.getFoodNameCountMap();

  /*
   Create a data file, with the naming convention frequency.dat,
   for backing up your accumulated data. The frequency.dat
   file should include every item (represented by a word)
   paired with the number of times that item appears in the input file.
  */
  // open the file in append mode
  ofstream data("frequency.dat", std::ios::app);

  // check if file is opened
  if (!data.is_open()) {
    cerr << "Unable to open data file" << endl;
    return 1;
  }

  // input the data line by line
  for (const auto &pair : foodNameCountMap) {
    data << pair.first << endl;
    data << pair.second << endl;
  }
  data.close();

  vector<string> dataContent;
  // open the data file in read mos=de and collect the information
  ifstream dat("frequency.dat", ios::app);

  // check if file is opened
  if (!dat.is_open()) {
    cerr << "Unable to open the file" << endl;
    return 1;
  }
  // collect the files contents
  while (getline(dat, line)) {
    dataContent.push_back(line);
  }
  dat.close();

  // present menu options
  while (shouldRun) {
    // print menu items
    cout << "\nWelcome to the Food Frequency Checker!" << endl;
    cout << "Please choose a option." << endl << endl;
    ;
    menu.printMenu();
    cin >> userChoice;

    // filter unwanted/error pron text
    while (!menu.inputMenuFilter(userChoice)) {
      cout << "please input a valid number: ";
      cin >> userChoice;
    }

    // handle user input
    switch (stoi(userChoice)) {
    case 1: {
      string itemName;
      cout << "\nPlease input the item or word you wish to look for: ";
      cin >> itemName;
      cout << "there are " << menu.searchItems(itemName) << " " << itemName
           << endl;
    } break;

    case 2:
      cout << endl;
      menu.showlist();
      break;

    case 3:
      cout << endl;
      menu.showListAlternative(content);
      break;
      
    case 4:
      shouldRun = false;
      break;
    }
  }

  return 0;
}