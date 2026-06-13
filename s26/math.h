#ifndef MATH_H
#define MATH_H
#include <iostream>

class Math {
public:
    Math() = default;
    int add(int a, int b);
};

extern "C" {
// int add(int a, int b);
int add(int& a, int& b);
int forloop(unsigned int N);
double multiply(double arr1[], double arr2[], unsigned int N);
};

#endif