// Example 3: Abstraction
#include <iostream> // Include library for input/output operations
#include <memory>  // Required for smart pointers
#include <memory>  // Required for std::make_unique
using namespace std; // Use the standard namespace

// Abstract base class representing a mathematical operation
class MathOperation {
public:
    virtual double calculate(double a, double b) = 0; // Pure virtual function
    virtual ~MathOperation() {} // Virtual destructor is essential

    void displayResult(double a, double b) {
        double result = calculate(a, b);
        std::cout << "Result: " << result << std::endl;
    }
};

// Concrete classes implementing specific operations
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
    MathOperation* add = new Addition();
    MathOperation* subtract = new Subtraction();
    MathOperation* multiply = new Multiplication();

    add->displayResult(5.0, 3.0);
    subtract->displayResult(5.0, 3.0);
    multiply->displayResult(5.0, 3.0);

    delete add;
    delete subtract;
    delete multiply;

    return 0;
}
