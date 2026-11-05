#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

/**
 * Operator overloading
 *
 * This exercise practices operator overloading by implementing
 * a Complex number class. You will be writing all the necessary
 * operator overloading to make the class work perfectly.
 *
 * Look at the files provided:
 * complex.h
 * complex.cpp
 * main.cpp
 *
 * Read all the comments and implement the missing parts
 * highlighted with "TODO"
 *
 * Also provided is a Makefile to make it easier to
 * build the executable. The target is called main.
 */

class Complex {
  public:
    // A default constructor to set both real and imaginary part to 0
    Complex() : rel(0), img(0) {}

    // A non-default constructor that accepts parameter values for initialation
    Complex(float r, float i) : rel(r), img(i) {}

    // Part 2
    // TODO: Implement an overloaded operator<< with friend to print out a complex number
    // For example std::cout << c << std::endl; should print out something like a + bi

    // Part 3
    // TODO: overload the add operator
    Complex operator+(const Complex& rhs) const;

    // TODO: overload the minus operator
    Complex operator-(const Complex& rhs) const;

    // TODO: overload the times operator
    Complex operator*(const Complex& rhs) const;

    // TODO: overload the times operator for float
    Complex operator*(const float& rhs) const;

    // TODO: overload the divide operator
    Complex operator/(const Complex& rhs) const;

    // Part 4
    // TODO: non-member function operator overload for float times complex using friend

    // Part 5

    // TODO: define a copy constructor

    // TODO: overload assignment operator

  private:
    float rel, img; // real and imaginary part of a complex number
};

#endif // COMPLEX_H
