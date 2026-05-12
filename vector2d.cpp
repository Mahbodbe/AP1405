#include "vector2d.h"
#include <iostream>

Vector2d::Vector2d(size_t _M, size_t _N) : Vector { _N }, M { _M } {
    std::cout << "Vector2d constructor: " << this << std::endl;
    arr2 = new int[M];
}

Vector2d::~Vector2d() {
    delete[] arr2;
    std::cout << "Vector2d destructor: " << this << std::endl;
}

Vector2d::Vector2d(const Vector2d &v) : Vector { v }, M { v.M }, arr2 { new int[v.M] } {
    std::cout << "Vector2D copy constructor: " << this << std::endl;
    for (size_t i = 0; i < M; i++)
        arr2[i] = v.arr2[i];
}

Vector2d::Vector2d(Vector2d &&v) : Vector { std::move(v) }, M { v.M }, arr2 { v.arr2 } {
    std::cout << "Vector2D move constructor: " << this << std::endl;
    v.arr2 = nullptr;
    v.M = 0;
}

Vector2d &Vector2d::operator=(const Vector2d &v) {
    std::cout << "Vector2d operator = copy version" << std::endl;
    Vector::operator=(v);
    if (this == &v)
        return *this;

    delete[] arr2;
    M = v.M;
    arr2 = new int[M];
    for (size_t i {}; i < M; i++)
        arr2[i] = v.arr2[i];
    return *this;
}

Vector2d &Vector2d::operator=(Vector2d &&v) {
    std::cout << "Vector2d operator = move version" << std::endl;
    Vector::operator=(std::move(v));
    delete[] arr2;
    arr2 = v.arr2;
    v.arr2 = nullptr;
    return *this;
}

void Vector2d::disp() const {
    std::cout << "Vector2d:";
    for (size_t i = 0; i < M; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;
}

void Vector2d::fill2() const {
    for (size_t i = 0; i < M; i++)
        arr2[i] = i;
}