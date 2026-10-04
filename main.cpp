#include <iostream>
#include <string>

// Homework 6 — Raymundo Lugardo
// CIS 5 Week 06 · Menu
using namespace std;

int main() {

int choice = 0;
  string name = "";

  do {
     cout << "\n============= MENU ==============\n";
     cout << "1. Say Hello\n";
     cout << "2. Countdown\n";
     cout << "3. Exit\n";
     cout << "Enter your choice (1-3): ";
     cin >> choice;

    if (choice == 1) {
        cout << "Enter name: ";
        cin >> name;
        cout << "Hello  " << name << "!\n";
    }
    else if (choice == 2) {
      int startNumber = 0;
      
      cout <<"Enter a postive number to count down from: ";
      cin >> startNumber;

      cout << "Countdown: ";
      for (int i = startNumber; i >= 0; i--){
          cout << i << " ";
      }
       cout << "\n";
    }
    else if (choice == 3){
      cout << "Exiting system...\n";
    }
    else {
      cout << "Invalid selection. Please choose 1, 2, or 3.\n";
    }
    
  } while (choice !=3);

    cout << "The Menu is closed" << endl;

  
  return 0;
}
