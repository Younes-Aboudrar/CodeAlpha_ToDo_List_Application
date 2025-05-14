#include <iostream>
#include <cstdlib> 
#include <string>
#include <vector>


using namespace std;


void clearScreen(); // The function to clear the console screen
void Exit() // This is the exit function
void displayMainMenu()  // The function to display the main menu
// This is the invalid input function
void InvalidInput(){
    int choice = 0;
    clearScreen();
    cout << "Invalid input!" << endl;
    cout << "[1] Retry again." << endl;
    cout << "[2] Exit." << endl;
    cout << "Please select an option (1-2): ";
    cin >> choice;
    if (choice == 2)
    {
        Exit();
    }
    if (choice != 1)
    {
        InvalidInput();
    }
}






