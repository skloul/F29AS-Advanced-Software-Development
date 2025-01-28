#include <iostream>
using namespace std;

#define size 5 // Define the size of the stack
int stack[size]; // Declare the stack array
int top = -1; // Initialize the top of the stack

// Function prototypes
void push(int value);
void pop();
int peek();
void display();

int main() {
    // Example usage of the push function
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    // Attempting to push another value (stack overflow)
    push(60);

    // Display the stack
    display();

    // Peek at the top element
    cout << "Top element (peek): " << peek() << endl;

    // Pop elements from the stack
    pop();
    pop();

    // Display the stack after popping
    display();

    return 0;
}

// Function definition for push
void push(int value) {
    if (top == size - 1) {
        cout << "Stack Overflow! Cannot push " << value << ". Stack is full." << endl;
    } else {
        top++; // Increment top
        stack[top] = value; // Add the value to the stack
        cout << "Pushed " << value << " to the stack." << endl;
    }
}

// Function definition for pop
void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Cannot pop. Stack is empty." << endl;
    } else {
        cout << "Popped " << stack[top] << " from the stack." << endl;
        top--; // Decrement top
    }
}

// Function definition for peek
int peek() {
    if (top == -1) {
        cout << "Stack is empty. No element to peek." << endl;
        return -1; // Return -1 to indicate an empty stack
    } else {
        return stack[top]; // Return the top element
    }
}

// Function definition for display
void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}