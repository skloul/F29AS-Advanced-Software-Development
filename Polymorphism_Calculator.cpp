// Example program
#include <iostream>
#include <string>
using namespace std;

class MathOperation {
public:
    virtual double calculate(double a, double b) {
        std::cout << "Base MathOperation calculation." << std::endl;
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

    std::cout << "Addition: " << operation1->calculate(5.0, 3.0) << std::endl;
    std::cout << "Subtraction: " << operation2->calculate(5.0, 3.0) << std::endl;
    std::cout << "Multiplication: " << operation3->calculate(5.0, 3.0) << std::endl;

    delete operation1;
    delete operation2;
    delete operation3;

    return 0;
}
