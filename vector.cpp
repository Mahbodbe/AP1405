// #include "vector.h"

// Vector::Vector(size_t _N) : N { _N } {
//     std::cout << "Vector constructor: " << this << std::endl;
//     arr = new int[N];
// }

// Vector::Vector() : N {}, arr { nullptr } {
//     std::cout << "Vector default: " << this << std::endl;
// }

// Vector::~Vector() {
//     delete[] arr;
// }

// Vector::Vector(const Vector &v) : N { v.N }, arr { new int[v.N] } {
//     std::cout << "Vector copy costructor: " << this << std::endl;
//     for (size_t i = 0; i < N; i++)
//         arr[i] = v.arr[i];
// }

// void Vector::fill() {
//     for (size_t i = 0; i < N; i++)
//         arr[i] = i;
// }
// void Vector::disp() const {
//     std::cout << "Vector:";
//     for (size_t i = 0; i < N; i++)
//         std::cout << arr[i] << " ";
//     std::cout << std::endl;
// }

// void Vector::push_back(int item) {
//     int *arr2 = new int[++N];
//     for (size_t i {}; i < N - 1; i++)
//         arr2[i] = arr[i];
//     arr2[N - 1] = item;
//     delete[] arr;
//     arr = arr2;
// }

#include "vector.h"
#include <exception>

Vector::Vector(size_t _N) : N { _N } {
    std::cout << "Vector constructor: " << this << std::endl;
    arr = new int[N];
}

Vector::Vector() : N {}, arr { nullptr } {
    std::cout << "Vector default: " << this << std::endl;
}

Vector::Vector(Vector &&v) : N { v.N }, arr { v.arr } {
    v.arr = nullptr;
    std::cout << "Vector moved " << this << std::endl;
}

Vector::~Vector() {
    delete[] arr;
    std::cout << "Vector destructor: " << this << std::endl;
}

Vector::Vector(const Vector &v) : N { v.N }, arr { new int[v.N] } {
    std::cout << "Vector copy costructor: " << this << std::endl;
    for (size_t i = 0; i < N; i++)
        arr[i] = v.arr[i];
}

void Vector::fill() {
    for (size_t i = 0; i < N; i++)
        arr[i] = i;
    disp();
}
void Vector::disp() const {
    std::cout << "Vector:";
    for (size_t i = 0; i < N; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void Vector::push_back(int item) {
    int *arr2 = new int[++N];
    for (size_t i {}; i < N - 1; i++)
        arr2[i] = arr[i];
    arr2[N - 1] = item;
    delete[] arr;
    arr = arr2;
}

int Vector::operator[](const size_t &i) const {
    if (i > N - 1)
        throw new std::invalid_argument { "index not valid" };

    return arr[i];
}

// Vector Vector::operator++(){
//     std::cout << "operator ++ left" << std::endl;
//     arr[N - 1]++;
//     return *this;
// }
// Vector& Vector::operator++(){
//     std::cout << "operator ++ left" << std::endl;
//     arr[N - 1]++;
//     return *this;
// }
const Vector &Vector::operator++() const {
    std::cout << "operator ++ left" << std::endl;
    arr[N - 1]++;
    return *this;
}

// Vector Vector::operator++(int) const {
//     std::cout << "operator ++ right" << std::endl;
//     Vector v { *this };
//     arr[N - 1]++;
//     return v;
// }
Vector Vector::operator++(int) const {
    std::cout << "operator ++ right" << std::endl;
    Vector v { *this };
    ++*this;
    return v;
}

Vector &Vector::operator+=(const Vector &v) {
    std::cout << "operator +=" << std::endl;
    if (v.arr == arr) {
        arr = static_cast<int *>(realloc(arr, (N + v.N) * sizeof(int)));
        for (size_t i {}; i < v.N; i++)
            arr[i + N] = arr[i];

        N += v.N;

        return *this;
    } else {
        arr = static_cast<int *>(realloc(arr, (N + v.N) * sizeof(int)));
        for (size_t i {}; i < v.N; i++)
            arr[i + N] = v.arr[i];
        N += v.N;
        return *this;
    }
    // int *arr2 { new int[N + v.N] };

    // for (size_t i {}; i < N; i++)
    //     arr2[i] = arr[i];

    // delete[] arr;
    // if (v.arr == arr)
    //     else for (size_t i {}; i < v.N; i++) arr2[i + N] = v.arr[i];

    // arr = arr2;
    // return *this;
}

// Vector Vector::operator+(const Vector& v){
//     Vector _v { *this };
//     _v += v;
//     return _v;
// }
Vector Vector::operator+(const Vector &v) {
    Vector _v { N + v.N };
    std::cout << &_v << std::endl;
    for (size_t i {}; i < N; i++)
        _v.arr[i] = arr[i];
    for (size_t i { N }; i < N + v.N; i++)
        _v.arr[i] = v.arr[i - N];
    return _v;
}

Vector::operator int() const {
    int sum {};
    for (size_t i {}; i < N; i++)
        sum += arr[i];
    return sum;
}

Vector &Vector::operator=(const Vector &v) {
    std::cout << "vector operator = copy version" << std::endl;
    if(this == &v)
        return *this;
    delete[] arr;
    N = v.N;
    arr = new int[N];
    for (size_t i {}; i < N; i++)
        arr[i] = v.arr[i];
    return *this;
}

Vector& Vector::operator=(Vector&&v){
    std::cout << "operator = move version" << std::endl;
    delete[] arr;
    arr = v. arr;
    N = v.N;
    v.arr = nullptr;
    return *this;
}