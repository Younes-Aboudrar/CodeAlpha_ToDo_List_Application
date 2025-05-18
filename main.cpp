#include <iostream>
#include <vector>
#include "Task.hpp"



std::vector<Task> tasks;
int nextId = 1;


// Function to add tasks
void addTask(){
    std::string title, description;
    std::cout << "Enter task title: ";
    std::getline(std::cin, title);
    std::cout << "Enter task description: ";
    std::getline(std::cin, description);
    tasks.emplace_back(nextId++, title, description);
    std::cout << "Taks added successfully!\n";
}

// Function to list all tasks
void listTasks(){
    if (tasks.empty())
    {
        std::cout << "No tasks available.\n";
        return;
    }
    std::cout << "Task List:\n";
    std::cout << "----------\n";
    for (const auto& task : tasks)
    {
        std::cout << task.getId() << ". " << task.getTitle() << "[" << (task.isCompleted()? "Completed" : "Pending") << "]\n";
    }
    std::cout << "---------\n";
}

// Function to mark a task as completed
void completeTask(){
    int id;
    std::cout << "Enter task ID to mark as completed: ";
    std::cin >> id;
    std::cin.ignore();
    for (auto& task : tasks)
    {
        if (task.getId() == id)
        {
            task.markAsCompleted();
            std::cout << "Task marked as completed!\n";
            return;
        }
    }
    std::cout << "Task not found!\n";
}

// Simple main menu
void displayMenu(){
    std::cout << "TODO List Application\n";
    std::cout << "[1] Add a task\n";
    std::cout << "[2] List all tasks\n";
    std::cout << "[3] Mark a task as completed\n";
    std::cout << "[4] Exit\n";
    std::cout << "Enter your choice\n";
}

int main(){
    int choice;
    bool running = true;
    std::cout << "Welcome to the TODO List Application\n";
    while (running)
    {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore();
        switch (choice)
        {
        case 1:
            addTask();
            break;
        case 2:
            listTasks();
            break;
        case 3:
            completeTask();
            break;
        case 4:
            std::cout << "Thank you for using the TODO List Application. Goodbye!\n";
            running = false;
            break;
        default:
            std::cout << "Invalid choice, Please try again.\n";
        }
    }
    return 0;
}