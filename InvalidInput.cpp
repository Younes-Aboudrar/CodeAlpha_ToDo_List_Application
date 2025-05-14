// This is the invalid input function
void InvalidInput(){
    clearScreen();
    int new_choice = 0;
    cout << "Invalid input!" << endl;
    cout << "[1] Retry again." << endl;
    cout << "[2] Exit." << endl;
    cout << "Please select an option (1-2): ";
    cin >> new_choice;
    if (new_choice == 2)
    {
        Exit();
    }
    if (new_choice != 1)
    {
        return InvalidInput();
    }
    else
    {
        return ask_user();
    }
}
