// Example 1: Linked List
#include<iostream>
using namespace std;

// Define the structure of a node in the linked list
struct node {
    int data;       // Data stored in the node
    node* next;     // Pointer to the next node in the list
};

node* head = NULL;  // Global head pointer, initially set to NULL (empty list)

// Function to insert a new node at the end of the linked list
void insertNode(int value);

int main() {
    // Insert nodes with values 5, 10, 15, and 7 into the linked list
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(7);

    // The print part has been removed as per your request
    return 0;
}

// Function definition for inserting a node
void insertNode(int value) {
    node* new_node, *last;  // Declare pointers for the new node and the last node

    // Create a new node and allocate memory for it
    new_node = new node;
    new_node->data = value; // Set the data of the new node
    new_node->next = NULL;  // Initialize the next pointer of the new node to NULL

    // Check if the list is empty
    if (head == NULL) {
        head = new_node;    // If the list is empty, the new node becomes the head
    } else {
        // If the list is not empty, traverse to the last node
        last = head;
        while (last->next != NULL) {
            last = last->next;  // Move to the next node until the last node is reached
        }
        // Append the new node at the end of the list
        last->next = new_node;
    }
}
