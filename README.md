# Item Tracking Program for Corner Grocer

## Scenario

You are doing a fantastic job at **Chada Tech** in your new role as a junior developer, and you have exceeded expectations in your last assignment for **Airgead Banking**. Your team is impressed with your work and has given you another, more complex assignment.

### Assignment Overview

Your task is to build an **item-tracking program** for the **Corner Grocer**. This program should incorporate all of their requested functionality to help them analyze their sales data effectively.

### Requirements

The Corner Grocer needs a program that will:

- Analyze text records generated throughout the day.
- List items purchased in chronological order from the time the store opens to the time it closes.
- Provide insights on how often items are purchased.

### Objective

The primary goal is to help the Corner Grocer rearrange their produce section based on purchasing frequency, allowing them to create the most effective layout for their customers.

---

### What did you do particularly well?
I followed the specified guidelines for the program to the best of my ability. Although the program isn't fully operational, it can serve as a solid foundation for future improvements.

### Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
Fixing the broken functionality of Menu Option One would likely enhance the security of my code, as I currently don't understand why the program fails to return the appropriate value. Additionally, I encountered an unknown error when writing to a file or printing to the console. Instead of displaying the correct output, the program would sometimes write into itself. For example, if the expected output was "Apple 4," I would get something like "4pple" instead. To resolve this issue, I ensured that each line ended properly after writing a single string.

### Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
I found printing to the console and writing to files to be the most challenging parts of this project. I struggled to get the program to output a concatenated string properly. After some time, I decided to break the concatenated string into two separate strings and print them on different lines, which resolved most of my issues.

The second challenge I faced was returning the correct value for Menu Item One. This part of the program was supposed to allow the user to find out the exact amount of any fruit in the system at any given time. For example, if the user wanted to know how many apples were in the system, they would input "Apple," and the output should be "There are 4 apples." However, the output I received was "There are 0 apples." Unfortunately, I wasn't able to resolve this issue or the printing problems.(which include writing to files). 

### What skills from this project will be particularly transferable to other projects or course work?
This course has allowed me to practice writting in C++. I've learned OOP in C++ and many of the functions from the standard library. All of this will help me in future projects even outside of C++.

### How did you make this program maintainable, readable, and adaptable?
First, I want to express my appreciation for the freedom given to me during these projects. I was able to create any classes I felt were necessary, along with appropriate function names and definitions. This opportunity allowed me to practice properly naming variables, classes, and functions while also opting out of any work I deemed unnecessary. However, I admit that some of my code isn't properly named.

To maintain the code, I created a class called MenuOptions. This decision allowed me to separate function definitions and variables from my main file, effectively breaking my code down into three main segments: file handling, menu printing, and choice handling. After establishing this "blueprint," I focused on working within these segments as much as possible to regulate the code.

When creating the functions for MenuOptions, I aimed to encapsulate most of the menu's functionality within the class. This significantly reduced the amount of code visible within the switch statement in the main function.
