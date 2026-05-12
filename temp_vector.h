#ifndef VECTOR_H
#define VECTOR_H

#include <compare>
#include <exception>
#include <iostream>
#include <utility>

template <typename T> class Vector {
public:
    Vector(size_t N);
    // explicit Vector(size_t N);
    Vector(const Vector &v);
    Vector();
    virtual ~Vector();
    void fill();
    void disp() const;
    size_t size() const {
        return N;
    }
    void push_back(T item);
    std::partial_ordering operator<=>(const Vector<T> &v) const {
        return N <=> v.N;
    }
    std::partial_ordering operator<=>(const size_t &_N) const {
        return N <=> _N;
    }
    bool operator==(const Vector<T> &v) const {
        return N == v.N;
    };
    bool operator==(const size_t &_N) const {
        return N == _N;
    };

    const T &operator[](const size_t &i) const;
    T &operator[](const size_t &i);

    friend std::ostream &operator<<(std::ostream &os, const Vector<T> &v) {
        os << "Vector: ";
        for (size_t i {}; i < v.N - 1; i++)
            os << v[i] << " ";
        os << v[v.N - 1];
        return os;
    }
    const Vector<T> &operator++() const;
    Vector<T> operator++(int) const;
    Vector<T> &operator+=(const Vector<T> &);
    Vector<T> operator+(const Vector<T> &);
    operator T() const;
    Vector<T> &operator=(const Vector<T> &v);
    Vector<T> &operator=(Vector<T> &&v);

private:
    size_t N;
    T *arr;
};

#include "vector.hpp"

#endif