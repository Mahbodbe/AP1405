#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "vector.h"
#include <iostream>

class Vector2d : public Vector {
public:
    Vector2d(size_t M, size_t N);
    Vector2d(const Vector2d &v);
    Vector2d(Vector2d &&v);
    Vector2d() = default;
    ~Vector2d();
    Vector2d &operator=(const Vector2d &v);
    Vector2d &operator=(Vector2d &&v);
    void disp() const override; // == // virtual void disp() const override;
    // void disp() const override;
    void fill2() const;

private:
    size_t M;
    int *arr2;
};

#endif