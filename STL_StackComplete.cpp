#include <iostream>
#include <stack> // Include the stack library from STL

using namespace std;

stack<int> myStack; // Using STL stack to manage elements

// Function prototypes
void push(int value); // Adds an element to the stack
void pop();           // Removes the top element from the stack
int peek();           // Returns the top element without removing it
void display();       // Displays all elements in the stack

int main() {
    // Push elements onto the stack
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    // Display the stack
    display();

    // Peek at the top element
    cout << "Top element (peek): " << peek() << endl;

    // Pop two elements from the stack
    pop();
    pop();

    // Display the stack after popping
    display();

    return 0;
}

// Function to push a value onto the stack
void push(int value) {
    myStack.push(value); // Push the value onto the stack
    cout << "Pushed " << value << " to the stack." << endl;
}

// Function to pop a value from the stack
void pop() {
    if (myStack.empty()) { // Check if the stack is empty
        cout << "Stack Underflow! Cannot pop. Stack is empty." << endl;
    } else {
        cout << "Popped " << myStack.top() << " from the stack." << endl;
        myStack.pop(); // Remove the top element from the stack
    }
}

// Function to return the top element of the stack
int peek() {
    if (myStack.empty()) { // Check if the stack is empty
        cout << "Stack is empty. No element to peek." << endl;
        return -1; // Return -1 to indicate an empty stack
    }
    return myStack.top(); // Return the top element of the stack
}

// Function to display stack elements
void display() {
    if (myStack.empty()) { // Check if the stack is empty
        cout << "Stack is empty." << endl;
    } else {
        stack<int> tempStack = myStack; // Create a temporary copy of the stack
        cout << "Stack elements (top to bottom): ";
        while (!tempStack.empty()) { // Iterate through the stack
            cout << tempStack.top() << " "; // Print the top element
            tempStack.pop(); // Remove the top element from the temporary stack
        }
        cout << endl;
    }
}
