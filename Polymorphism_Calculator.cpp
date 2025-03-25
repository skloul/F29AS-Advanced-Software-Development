// Example program
#include <iostream>
#include <string>
using namespace std;

class MathOperation {
public:
    virtual double calculate(double a, double b) {
        cout << "Base MathOperation calculation." << endl;
        return 0.0; // Default implementation
    }
    virtual ~MathOperation() {} //Important for base classes with virtual functions.
};

class Addition : public MathOperation {
public:
    double calculate(double a, double b) override {
        return a + b;
    }
};

class Subtraction : public MathOperation {
public:
    double calculate(double a, double b) override {
        return a - b;
    }
};

class Multiplication : public MathOperation {
public:
    double calculate(double a, double b) override {
        return a * b;
    }
};

int main() {
    MathOperation* operation1 = new Addition();
    MathOperation* operation2 = new Subtraction();
    MathOperation* operation3 = new Multiplication();

    cout << "Addition: " << operation1->calculate(5.0, 3.0) << endl;
    cout << "Subtraction: " << operation2->calculate(5.0, 3.0) << endl;
    cout << "Multiplication: " << operation3->calculate(5.0, 3.0) << endl;

    delete operation1;
    delete operation2;
    delete operation3;

    return 0;
}
