#include <iostream> // Include library for input/output operations
#include <unordered_map>  // Include the hash map header
#include <cstdint>  // Include for uint64_t, which ensures a 64-bit unsigned
                                  // integer type for consistent behavior across platforms.
using namespace std; // Use the standard namespace
// Define a structure to represent a student's record
struct StudentRecord
{
    string Name;       // Name of the student
    uint64_t StudentID;     // Unique ID for the student
    double GPA;             // Grade Point Average (GPA) of the student
    string Course;     // Course the student is enrolled in
};
int main()
{
  // Using  (unordered_map) for fast lookups
    unordered_map<string, StudentRecord> unorderedStudentMap;
   
    // Insert student records into the hash map using the student's name as the key
    unorderedStudentMap["Lisa"] = {"Lisa", 12345, 3.8, "Software Development"};
    unorderedStudentMap["Andrew"] = {"Andrew", 12346, 3.4, "Data Structure"};
    unorderedStudentMap["Nick"] = {"Nick", 12347, 3.9, "Software Engineering"};
    unorderedStudentMap["Lilia"] = {"Lilia", 12348, 3.7, "Computer Systems"};
    unorderedStudentMap["Idris"] = {"Idris", 12349, 3.6, "Advanced Software Development"};
    // Check if the iterator points to a valid element (i.e., "Nick" was found)
    // Finding "Nick" in the hash table/map use the find() function to search for the key "Nick"
    auto it_unordered = unorderedStudentMap.find("Nick");

    if (it_unordered != unorderedStudentMap.end())
    {    // it_unordered->first refers to the key ("Nick"), and it_unordered->second refers to 
          // the value (StudentRecord)
        cout << "Found Nick in unordered map: GPA = " << it_unordered->second.GPA 
         << ", Course = " << it_unordered->second.Course << endl;
    }
    return 0; // Return 0 to indicate successful execution
}
