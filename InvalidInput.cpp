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
