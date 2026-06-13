#include "math.h"

int Math::add(int a, int b) {
    return a + b;
}

// int add(int a, int b) { //wrapper for Math::add
//     Math m {};
//     return m.add(a, b);
// }
int add(int& a, int& b) { //wrapper for Math::add
    Math m {};
    a++;
    b++;
    return m.add(a, b);
}

int forloop(unsigned int N){
    unsigned int cnt = 0;
    for (unsigned int i {}; i < N; i++)
        for (unsigned int j {}; j < N; j++)
            cnt += i + j;
    return cnt;
}

double multiply(double arr1[], double arr2[], unsigned int N){
    int sum {};
    for (unsigned int i {}; i < N; i++)
        sum += arr1[i] * arr2[i];
    return sum;
}
