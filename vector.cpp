#include <iostream>    // Include library for input/output operations
#include <vector>      // Include the vector header, a dynamic array container
#include <cstdint>     // Include for uint64_t, ensuring 64-bit unsigned integers
using namespace std;

struct StudentRecord {
    string Name;   // Student’s Name
    uint64_t StudentID; // Unique ID for the student
    double GPA;         // Grade Point Average (GPA) of the student
    string Course; // Course the student is enrolled in
};

int main() {
    // Using vector to store student records
    std::vector<StudentRecord> students;

    // Add student records to the vector using emplace_back()
    students.push_back({"Lisa", 12345, 3.8, "Software Development"});
    students.push_back({"Andrew", 12346, 3.4, "Data Structure"});
    students.push_back({"Nick", 12347, 3.9, "Software Engineering"});
    students.push_back({"Lilia", 12348, 3.7, "Computer Systems"});
    students.push_back({"Idris", 12349, 3.6, "Advanced Software Development"});

    // Iterating through the vector to find "Nick"
    bool found = false;
    for (const auto& student : students) {  
        if (student.Name == "Nick") {  
            std::cout << "Found Nick in vector: GPA = " << student.GPA 
                      << ", Course = " << student.Course << std::endl;
            found = true;
            break;  
        }
    }

    if (!found) {
        std::cout << "Nick was not found in the vector." << std::endl;
    }

    return 0;  // Return 0 to indicate successful execution
}
