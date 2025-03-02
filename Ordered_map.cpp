#include <iostream>  // Library for input/output operations
#include <map>       // Library for std::map container
#include <cstdint>   // Library for uint64_t (64-bit unsigned integer)

using namespace std; // Use standard namespace

// Structure to represent a student's record
struct StudentRecord
{
    string Name;        // Student's name
    uint64_t StudentID; // Unique student ID
    double GPA;         // Grade Point Average
    string Course;      // Enrolled course
};

int main()
{
    // Ordered map to store student records
    // Key: Student's name (string)
    // Value: StudentRecord structure
    map<string, StudentRecord> studentMap;

    // Inserting student records
    studentMap["Lisa"] = {"Lisa", 12345, 3.8, "Software Development"};
    studentMap["Andrew"] = {"Andrew", 12346, 3.4, "Data Structure"};
    studentMap["Nick"] = {"Nick", 12347, 3.9, "Software Engineering"};
    studentMap["Lilia"] = {"Lilia", 12348, 3.7, "Computer Systems"};
    studentMap["Idris"] = {"Idris", 12349, 3.6, "Advanced Software Development"};

    // Searching for a student record
    auto it = studentMap.find("Nick");

    // If found, print student details
    if (it != studentMap.end())  
    {
        cout << "Found Nick in ordered map: GPA = " << it->second.GPA
             << ", Course = " << it->second.Course << endl;
    }

    return 0; // Indicate successful execution
}
