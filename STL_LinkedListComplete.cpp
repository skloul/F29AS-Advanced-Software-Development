 #include <iostream>
#include <list>  // Include the STL list header

using namespace std;

list<int> linkedList; // Using STL list to represent the linked list

// Function prototypes
void insertNode(int value);
void print_Data_values();
void delete_a_node(int value);

int main() {
    // Insert nodes with values 5, 10, 15, and 7
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(7);
    
    // Print the list after insertion
    print_Data_values();
    
      // Attempt to delete a node with value 1 (which does not exist)
    delete_a_node(1);
    // Attempt to delete a node with value 15 (which does exist)
    delete_a_node(15);
    
    // Print the list again to show the effect of deletion
    print_Data_values();
    
    return 0;
}

// Function to insert a node at the end of the linked list
void insertNode(int value) {
    linkedList.push_back(value); // Adds the value to the end of the list
}

// Function to print the values in the linked list
void print_Data_values() {
    if (linkedList.empty()) { // Check if the list is empty
        cout << "This list is empty, head = Null\n";
        return;
    }

    cout << "head ->";
    for (int value : linkedList) { // Iterate through the list and print values
        cout << value << "->";
    }
    cout << "Null\t" << endl; // Indicate the end of the list
}

// Function to delete a node with a specific value
void delete_a_node(int value) {
    // Find the value in the list
    auto it = find(linkedList.begin(), linkedList.end(), value);
    
    if (it != linkedList.end()) { // If the value is found
        linkedList.erase(it); // Remove the node from the list
        cout << "Node with value " << value << " deleted.\n";
    } else { // If the value is not found
        cout << "Error: Value " << value << " not found in the list.\n";
    }
}
