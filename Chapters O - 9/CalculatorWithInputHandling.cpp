#include <iostream>
#include <limits> // for std::numeric_limits
 
void ignoreLine()
{
    // std::cin.ignore() ignores a certain amount of input (first param) 
    // or until a certain character (second param)
    // std::number_limits::max() shows the maximum value of something.
    // std::streamsize is the size of the input buffer. 
    // This deals with having too much input by clearing the buffer.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
 
double getDouble()
{
    while (true) 
    {
        std::cout << "Enter a double value: ";
        double x{};
        std::cin >> x;
 
        // Check for failed extraction
        if (std::cin.fail()) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            ignoreLine(); // and remove the bad input
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            ignoreLine(); // remove any extraneous input
 
            // the user can't enter a meaningless double value, so we don't need to worry about validating that
            return x;
        }
    }
}
 
char getOperator()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char operation{};
        std::cin >> operation;
        ignoreLine();
 
        // Check whether the user entered meaningful input
        switch (operation)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return operation; // return it to the caller
        default: // otherwise tell the user what went wrong
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
    } // and try again
}
 
void printResult(double x, char operation, double y)
{
    switch (operation)
    {
    case '+':
        std::cout << x << " + " << y << " is " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " is " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " is " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " is " << x / y << '\n';
        break;
    default: // Being robust means handling unexpected parameters as well, even though getOperator() guarantees op is valid in this particular program
        std::cerr << "Something went wrong: printResult() got an invalid operator.\n";
    }
}
 
int main()
{
    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };
 
    printResult(x, operation, y);
 
    return 0;
}