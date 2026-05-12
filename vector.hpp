template <typename T> Vector<T>::Vector(size_t _N) : N { _N } {
    std::cout << "Vector constructor: " << this << std::endl;
    arr = new T[N];
}

template <typename T> Vector<T>::Vector() : N {}, arr { nullptr } {
    std::cout << "Vector default: " << this << std::endl;
}

template <typename T> Vector<T>::~Vector() {
    delete[] arr;
    std::cout << "Vector destructor: " << this << std::endl;
}

template <typename T> Vector<T>::Vector(const Vector<T> &v) : N { v.N }, arr { new T[v.N] } {
    std::cout << "Vector copy costructor: " << this << std::endl;
    for (size_t i = 0; i < N; i++)
        arr[i] = v.arr[i];
}

template <typename T> void Vector<T>::fill() {
    for (size_t i = 0; i < N; i++)
        arr[i] = i;
}

template <typename T> void Vector<T>::disp() const {
    std::cout << "Vector:";
    for (size_t i = 0; i < N; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

template <typename T> void Vector<T>::push_back(T item) {
    T *arr2 = new T[++N];
    for (size_t i {}; i < N - 1; i++)
        arr2[i] = arr[i];
    arr2[N - 1] = item;
    delete[] arr;
    arr = arr2;
}

template <typename T> const T &Vector<T>::operator[](const size_t &i) const {
    if (i > N - 1)
        throw new std::invalid_argument { "index not valid" };

    return arr[i];
}

template <typename T> T &Vector<T>::operator[](const size_t &i) {

    return const_cast<T &>(std::as_const(*this)[i]);
}

// Vector::Vector(Vector &&v) : N { v.N }, arr { v.arr } {
//     v.arr = nullptr;
//     std::cout << "Vector moved " << this << std::endl;
// }

// // Vector Vector::operator++(){
// //     std::cout << "operator ++ left" << std::endl;
// //     arr[N - 1]++;
// //     return *this;
// // }
// // Vector& Vector::operator++(){
// //     std::cout << "operator ++ left" << std::endl;
// //     arr[N - 1]++;
// //     return *this;
// // }

template <typename T> const Vector<T> &Vector<T>::operator++() const {
    std::cout << "operator ++ left" << std::endl;
    arr[N - 1]++;
    return *this;
}

// // Vector Vector::operator++(int) const {
// //     std::cout << "operator ++ right" << std::endl;
// //     Vector v { *this };
// //     arr[N - 1]++;
// //     return v;
// // }

template <typename T> Vector<T> Vector<T>::operator++(int) const {
    std::cout << "operator ++ right" << std::endl;
    Vector<T> v { *this };
    ++*this;
    return v;
}
template <typename T> Vector<T> &Vector<T>::operator+=(const Vector<T> &v) {
    // std::cout << "operator +=" << std::endl;
    // if (v.arr == arr) {
    //     arr = static_cast<T *>(realloc(arr, (N + v.N) * sizeof(T)));
    //     for (size_t i {}; i < v.N; i++)
    //         arr[i + N] = arr[i];

    //     N += v.N;

    //     return *this;
    // } else {
    //     arr = static_cast<T *>(realloc(arr, (N + v.N) * sizeof(T)));
    //     for (size_t i {}; i < v.N; i++)
    //         arr[i + N] = v.arr[i];
    //     N += v.N;
    //     return *this;
    // }
    T *arr2 { new T[N + v.N] };

    for (size_t i {}; i < N; i++)
        arr2[i] = arr[i];

    delete[] arr;
    if (v.arr == arr)
        for (size_t i {}; i < v.N; i++)
            arr[i + N] = arr[i];
    else
        for (size_t i {}; i < v.N; i++)
            arr2[i + N] = v.arr[i];

    arr = arr2;
    return *this;
}

// // Vector Vector::operator+(const Vector& v){
// //     Vector _v { *this };
// //     _v += v;
// //     return _v;
// // }
template <typename T> Vector<T> Vector<T>::operator+(const Vector<T> &v) {
    Vector<T> _v { N + v.N };
    std::cout << &_v << std::endl;
    for (size_t i {}; i < N; i++)
        _v.arr[i] = arr[i];
    for (size_t i { N }; i < N + v.N; i++)
        _v.arr[i] = v.arr[i - N];
    return _v;
}

template <typename T> Vector<T>::operator T() const {
    T sum {};
    for (size_t i {}; i < N; i++)
        sum += arr[i];
    return sum;
}

template <typename T> Vector<T> &Vector<T>::operator=(const Vector<T> &v) {
    std::cout << "vector operator = copy version" << std::endl;
    if (this == &v)
        return *this;
    delete[] arr;
    N = v.N;
    arr = new T[N];
    for (size_t i {}; i < N; i++)
        arr[i] = v.arr[i];
    return *this;
}
template <typename T> Vector<T> &Vector<T>::operator=(Vector<T> &&v) {
    std::cout << "operator = move version" << std::endl;
    delete[] arr;
    arr = v.arr;
    N = v.N;
    v.arr = nullptr;
    return *this;
}