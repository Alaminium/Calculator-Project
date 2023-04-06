//Implementation of calculator.hpp
#include "calculator.hpp"
#include <cmath>
#include <deque>

    template<class Number>
    Calculator<Number>::Calculator(){
        setType(type_default);
    }   
    
    template<class Number>
    Calculator<Number>::Calculator(types type){
        setType(type);
    }

    template<class Number>
    Number Calculator<Number>::add(Number a, Number b){
        return a+b;
    }

    template<class Number>
    Number Calculator<Number>::subtract(Number a, Number b){
        return a-b;
    }   

    template<class Number>
    Number Calculator<Number>::multiply(Number a, Number b){
        return a*b;
    }

    template<class Number>
    Number Calculator<Number>::divide(Number a, Number b){
        return a/b;
    }
    
    template<class Number>
    Number Calculator<Number>::exponent(Number a, Number b){
        return std::pow(a,b);
    }

    template<class Number>
    Number Calculator<Number>::remainder(Number a, Number b){
        return a%b;
    }

    template<class Number>
    void Calculator<Number>::setType(types type){
        calc_type = type;
    }

    template<class Number>
    void Calculator<Number>::syntaxError(){
        std::cout << "Syntax Error" << std::endl;
    }

    template<class Number>
    void Calculator<Number>::dividingByZeroError(){
        std::cout << "Dividing By Zero Error" << std::endl;
    }

    template<class Number>
    Number Calculator<Number>::calculate(){
        //Possibly will need a deque 
    }