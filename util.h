#ifndef UTIL_H
#define UTIL_H

#include <deque>
#include <iostream>
#include <vector>

// template <typename T>
// T find_optimum(const std::vector<T> &array,
//                bool (*comp)(const T &a, const T &b)) { // first class function
//     T opt { array[0] };

//     for (size_t i { 1 }; i < array.size(); i++)
//         if (comp(array[i], opt))
//             opt = array[i];

//     return opt;
// }

// template<typename T>
// bool smaller(const T &a, const T &b) { // callback
//     return a < b;
// }
// // bool smaller(const long &a, const long &b) { // callback
// //     return a < b;
// // }
// bool larger(const long &a, const long &b) {
//     return a > b;
// }

template <class T> using Comparison = bool (*)(const T &a, const T &b);

// template <typename T>
// T find_optimum(const std::vector<T> &array, Comparison<T> comp) { // first class function
//     T opt { array[0] };

//     for (size_t i { 1 }; i < array.size(); i++)
//         if (comp(array[i], opt))
//             opt = array[i];

//     return opt;
// }

// template <typename T>
// const T *find_optimum(const std::vector<T> &array, Comparison<T> comp) { // first class function
//     const T *opt { &array[0] };

//     for (size_t i { 1 }; i < array.size(); i++)
//         if (comp(array[i], *opt))
//             opt = &array[i];

//     return opt;
// }

// struct Less {
//     bool operator()(const long &a, const long &b) {
//         return a < b;
//     }
// };

template <typename T> struct Less {
    bool operator()(const T &a, const T &b) {
        return a < b;
    }
};

// struct Nearer {
//     Nearer(int _X) : X { _X }{}
//     bool operator()(const long &a, const long &b) {
//         return std::abs(a-X) < std::abs(b-X);
//     }
//     int X;
// };
template <typename T> struct Nearer {
    Nearer(double _X) : X { _X } {
    }
    bool operator()(const T &a, const T &b) {
        return std::abs(a - X) < std::abs(b - X);
    }
    double X;
};

template <typename T, typename Comp>
const T *find_optimum(const std::vector<T> &array, Comp comp) { // first class function
    const T *opt { &array[0] };

    for (size_t i { 1 }; i < array.size(); i++)
        if (comp(array[i], *opt))
            opt = &array[i];

    return opt;
}

template <class T> bool smaller(const T &a, const T &b) { // callback
    return a < b;
}
// bool smaller(const long &a, const long &b) { // callback
//     return a < b;
// }
bool larger(const long &a, const long &b) {
    return a > b;
}

template <typename Iter> void disp(Iter begin, Iter end) {
    for (Iter iter { begin }; iter != end; iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;
}
// void disp(std::deque<int>::iterator begin, std::deque<int>::iterator end) {
//     for (auto iter { begin }; iter != end; iter++)
//         std::cout << *iter << " ";
//     std::cout << std::endl;
// }

#endif