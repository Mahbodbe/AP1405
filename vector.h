#ifndef VECTOR_H
#define VECTOR_H

#include <compare>
#include <iostream>

class Vector {
public:
    // Vector(size_t N);
    explicit Vector(size_t N);
    Vector(const Vector &v);
    Vector();
    Vector(Vector &&v); //move constructor
    ~Vector();
    void fill();
    // void disp() const;
    virtual void disp() const;
    size_t size() const {
        return N;
    };
    void push_back(int item);
    // bool operator<(const Vector &v) const {
    //     return N < v.N;
    // }
    // bool operator<(size_t _N) const {
    //     return N < _N;
    // }
    // friend bool operator<(const size_t &N, const Vector &v) {
    //     return N < v.N;
    // };

    // bool operator==(const Vector &v) const {
    //     return N == v.N;
    // };
    // friend bool operator==(const size_t &N, const Vector &v) {
    //     return N == v.N;
    // };
    // std::partial_ordering operator<=>(const Vector &v) const {
    //     return N <=> v.N;
    // };
    // friend std::partial_ordering operator<=>(const size_t &N, const Vector &v) {
    //     return N <=> v.N;
    // };
    int operator[](const size_t &i) const;
    // friend std::ostream &operator<<(std::ostream &os, const Vector &v) {
    //     os << "Vector: ";
    //     for (size_t i {}; i < v.size() - 1; i++)
    //         os << v[i] << " ";
    //     os << v[v.size() - 1];
    //     return os;
    // }
    friend std::ostream &operator<<(std::ostream &os, const Vector &v) {
        os << "Vector: ";
        for (size_t i {}; i < v.N - 1; i++)
            os << v[i] << " ";
        os << v[v.N - 1];
        return os;
    };
    // Vector operator++();
    // Vector& operator++();
    const Vector &operator++() const;
    Vector operator++(int) const;
    Vector &operator+=(const Vector &);
    Vector operator+(const Vector &);
    operator int() const;
    Vector &operator=(const Vector &);
    Vector &operator=(Vector &&v);

    

private:
    size_t N;
    int *arr;
};

#endif