#include "headers.hpp"
#include "view.hpp"


void tasks_view() {
    cout << "Your tasks:" << endl;
    // Code to view tasks goes here
}
void tasks_add() {
    cout << "Adding a task..." << endl;
    // Code to add a task goes here
}
void tasks_remove() {
    cout << "Removing a task..." << endl;
    // Code to remove a task goes here
}
void tasks_edit() {
    cout << "Editing a task..." << endl;
    // Code to edit a task goes here
}
void tasks_mark_complete() {
    cout << "Marking a task as complete..." << endl;
    // Code to mark a task as complete goes here
}

int main() {
    int choice = ask_user();
    switch (choice) {
        case 1:
            tasks_view();
            break;
        case 2:
            tasks_add();
            break;
        case 3:
            tasks_remove();
            break;
        case 4:
            tasks_edit();
            break;
        case 5:
            tasks_mark_complete();
            break;
        case 6:
            Exit();
            break;
    }
    return 0;
}