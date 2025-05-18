#include "Task.hpp"
#include <iostream>

Task::Task(int id, const std::string& title, const std::string& description): id(id), title(title), description(description), completed(false) {
    creationDate = std::time(nullptr);
    completionDate = 0;
}

int Task::getId() const {
    return id;
}

std::string Task::getTitle() const {
    return title;
}

std::string Task::getDescription() const {
    return description;
}

bool Task::isCompleted() const {
    return completed;
}

std::time_t Task::getCreationDate() const {
    return creationDate;
}

void Task::markAsCompleted() {
    if (!completed)
    {
        completed = true;
        completionDate = std::time(nullptr);
    }
    
}