#include"MenuOptions.h"
#include <utility>


void MenuOptions::printMenu() {
    using namespace std;

    cout << "Menu Options:" << endl;
    cout << "1. Search" << endl;
    cout << "2. Show Items" << endl;
    cout << "3. Show Items (Alternative)" << endl;
    cout << "4. Exit" << endl;
}

unsigned int MenuOptions::searchItems(const std::string& food) {
    // finds a match and returns it
    if (foodNameCountMap.count(food) > 0) {
        return foodNameCountMap[food];
    }else {
        return 0;
    }
}

void MenuOptions::showlist() {
    for (const auto& pair:foodNameCountMap) {
        // std::cout << pair.first << " " << pair.second << std::endl; (doesn't work for me)
        std::cout << pair.first << std::endl; 
        std::cout << pair.second << std::endl; 
}
}

void MenuOptions::showListAlternative(const std::vector<std::string>& foodNames) {
    using namespace std;
    // create a nwe variable to hold the asterisk 
    string asterisk = "";
    // loop through the list
    for (const auto& pair: foodNameCountMap) {
        asterisk.clear(); // ensure the string is empty
        // use pair.second to mark the end of the second loop.
        for (short i = 0; i < pair.second; i++) {
            // add * into asterisk
            asterisk+= "*";
        }
        // print the result 
        // cout << pair.first << " " << asterisk << endl; (doesn't work for me)
        cout << pair.first <<endl; 
        cout << asterisk << endl;
    }
}


bool MenuOptions::inputMenuFilter(std::string userin) {
    using namespace std;
    
    try {
        unsigned int parsedInt = stoi(userin); // Parse the string to a double
        // ensure that userin is within the range of the menu items
        if (parsedInt > 0 && parsedInt < 5){
            return true;
        }else {
            cout << "please input a number between the range of 1 and 4" << endl;
            return false;
        }
    } catch (const invalid_argument& e) {
        return false;
    } catch (const out_of_range& e) {
        return false;
    }
}

void MenuOptions::populateFoodItems(const std::vector<std::string>& foodNames) {
    // loops through the list and inserts, (food, unsigned int) 
     for (const auto& food:foodNames) {
        foodNameCountMap.insert(std::make_pair(food, 0));        
    }    
}

void MenuOptions::countFoodItems(const std::vector<std::string>& foodNames) {
    // loop through the content and count the repetitive words 
    for (const auto& food:foodNames) {
        foodNameCountMap[food] = std::count(foodNames.begin(), foodNames.end(), food);
    } 

}

