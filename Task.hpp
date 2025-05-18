#pragma once
#include <string>
#include <ctime>


/**
 * @brief Class representing a single task.
 * 
 * This class provides basic functionality for creating and managing tasks.
 */
class Task {
private:
    int id;
    std::string title;
    std::string description;
    bool completed;
    std::time_t creationDate;
    std::time_t completionDate;

public:
        /**
     * @brief Construct a new Task object.
     * 
     * @param id The unique identifier for the task.
     * @param title The task title.
     * @param description The task description.
     */
    Task(int id, const std::string& title, const std::string& description);

    //Getters
    int getId() const;
    std::string getTitle() const;
    std::string getDescription() const;
    bool isCompleted() const;
    std::time_t getCreationDate() const;

    //Methods
    void markAsCompleted();
};