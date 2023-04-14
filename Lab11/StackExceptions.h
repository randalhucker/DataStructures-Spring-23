#include <exception>
#include <string>

using namespace std;

class StackUnderflowException : public std::exception
{
public:
    string what() // overrides what() virtual function from exception that returns an explanatory string
    {
        return "The stack is empty.";
    }
};

class StackOverflowException : public std::exception
{
public:
    string what() // overrides what() virtual function from exception that returns an explanatory string
    {
        return "The stack is full.";
    }
};