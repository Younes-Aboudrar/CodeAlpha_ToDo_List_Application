// The function to display the main menu
void displayMainMenu(){
    clearScreen();
    cout << "To-Do List:" << endl;
    cout << "[1] View tasks" << endl;
    cout << "[2] Add task" << endl;
    cout << "[3] Remove task" << endl;
    cout << "[4] Edit task" << endl;
    cout << "[5] Mark task as complete" << endl;
    cout << "[6] Exit" << endl;
    cout << "Please select an option (1-6): ";
}

int ask_user(){
    int choice = 0;
    displayMainMenu();
    cin >> choice;
    if (choice < 1 || choice > 6)
    {
        InvalidInput();
    }
    return choice;
}