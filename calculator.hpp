#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <string>
#include <stack>

//GUI needs to eventually be implemented

template <class Number> //Template class to account for both floats and integers
class Calculator //Calculator Class
{
    public:
    enum types{type_default, type_gui}; //Enum
    Calculator(); //Non-Parameterized Calculator
    
    Calculator(types type); //

    Number add(Number a, Number b); //Calculator function to support addition

    Number subtract(Number a, Number b); //Calculator function to support subtraction

    Number multiply(Number a, Number b); //Calculator function to support multiplication

    Number divide(Number a, Number b); //Calculator function to support subtraction
    
    Number exponent(Number a, Number b); //Calculator function to support exponents

    Number remainder(Number a, Number b); //Calculator function to support remainder (possibly unecessary)

    std::string decimalToFraction(Number a); //Calculator function to convert a decimal number to fraction

    void syntaxError(); //Calculator function to print out "syntax error"

    void dividingByZeroError(); //Calculator function to print out 

    void setType(types type);//Sets type of calculator 

    Number calculate(); //Preforms calculations

    //functions to scroll up and down in the calculator need to be made

    private:
    types calc_type;
    //stack is needed to store previous expressions so that the user is able to view them (this stack needs to be a private member)
}

#endif