#include <iostream>
#include <queue>  // Include the queue library

using namespace std;

queue<int> myQueue;  // Using STL queue to manage elements

// Function to add an element to the queue (enqueue)
void enqueue(int value) {
    myQueue.push(value);
    cout << "Enqueued: " << value << endl;
}

// Function to remove an element from the front of the queue (dequeue)
void dequeue() {
    if (myQueue.empty()) {
        cout << "Queue is empty. Cannot dequeue." << endl;
    } else {
        cout << "Dequeued: " << myQueue.front() << endl;
        myQueue.pop();
    }
}

// Function to return the front element of the queue (peek)
int peek() {
    if (myQueue.empty()) {
        cout << "Queue is empty. No element to peek." << endl;
        return -1; // Indicating an empty queue
    }
    return myQueue.front();
}

// Function to display all elements in the queue
void display() {
    if (myQueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        queue<int> tempQueue = myQueue; // Create a temporary copy to iterate
        cout << "Queue elements (front to back): ";
        while (!tempQueue.empty()) {
            cout << tempQueue.front() << " ";
            tempQueue.pop();
        }
        cout << endl;
    }
}

// Main function to test the queue implementation
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    cout << "Front element (peek): " << peek() << endl;

    dequeue();
    display();

    return 0;
}
