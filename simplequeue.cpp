#include <iostream> // Include library for input/output operations
using namespace std; // Use the standard namespace

// Define a few global integer values 
#define size 5     // Define the size of the queue
int queue[size];  // Declare the queue array
int front = -1;   // Initialise the front of the queue
int rear = -1;    // Initialise the rear of the queue

// Function prototypes
void enqueue(int value);
void dequeue();
int peek();
void display();

int main() {
    // Example usage of the enqueue function
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    enqueue(6); // Attempting to enqueue another value (queue overflow)
    display();  // Display the queue

    // Peek at the front element
    cout << "Front element (peek): " << peek() << endl;

    dequeue(); // Dequeue the front element from the queue
    dequeue(); // Dequeue the front element from the queue
    display(); // Display the queue after dequeuing

    return 0;
}

// Function definition for enqueue
void enqueue(int value) {
    // Check if the queue is full
    if (rear == size - 1) {  
        cout << "Queue Overflow! Cannot enqueue " << value << ". The queue is full." << endl;
        return; // Exit the function since no more elements can be added
    }

    // Check if the queue is empty (i.e., no elements have been added yet)
    if (front == -1 && rear == -1) {  
        // Yes, the queue is empty
        front = 0; // Set front to the first position
        rear = 0;  // Initialise rear to the first position as well
    } else {  
        // No, the queue is not empty but has space available
        rear++; // Move rear to the next position to accommodate the new element
    }

    queue[rear] = value; // Store the new value at the updated rear position
    cout << "Successfully enqueued " << value << " into the queue." << endl;
} // End of enqueue function

// Function definition for dequeue
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! Queue is empty." << endl;
    } else {
        cout << "Dequeued: " << queue[front] << endl;
        front++;
        if (front > rear) {
            front = rear = -1; // Reset queue if it becomes empty
        }
    }
}

// Function definition for peek
int peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty. No element to peek." << endl;
        return -1;
    } else {
        return queue[front];
    }
}

// Function definition for display
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
