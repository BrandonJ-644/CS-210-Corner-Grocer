#ifndef MENUOPTIONS_H
#define MENUOPTIONS_H

#include <iostream> 
#include <stdexcept>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

class MenuOptions {
    private:
            std::map<std::string,unsigned int> foodNameCountMap;
    public:
        /// prints the menu interface
        void printMenu();

        /**
        * Prompt a user to input the item, or word, they wish to look for.
        * @param foodNames list of food items 
        * @return a numeric value for the frequency of the specific word.
        */
        unsigned int searchItems(const std::string& food);

        /// Print the list with numbers that represent the frequency of all items purchased.
        void showlist();

        /**
        * Print the list with asterisk that represent the frequency of all items purchased.
        * @param foodNames list of food items 
        */
        void showListAlternative(const std::vector<std::string>& foodNames);
   
        /**
        * count the amount of times a specific food is mentioned within the list
        * @param foodNames list of food items 
        */
        void countFoodItems(const std::vector<std::string>& foodNames);

        /**
        * Parses a string to an unsigned int with error checking
        * @param userin User's console input
        * @return true if input is valid, false otherwise
        */
        bool inputMenuFilter(std::string userin);
        
        /**
        * Populates the class attribute foodNameCountMap
        * @param foodNames list of food names
        */
        void populateFoodItems(const std::vector<std::string>& foodNames);
        

        /// reurns the class attribute foodNameCountMap
        std::map<std::string, unsigned int> getFoodNameCountMap() {
                return foodNameCountMap;
        }
        
};

#endif
