#include <math.h>

#include <iostream>

// s01
/*
int main()
{
    //wchar_t c = 'L'; //in c
    wchar_t c{'L'};
    c = 'D';
    int x{4};
    std::cout << "HELLO WORLD!" << std::endl;
    return 0;
}
*/

// s02

/*
#include <fstream>*/
#include <numbers>
#include <typeinfo>

// using namespace std; // namespace pollution
// using std::cin; // namespace pollution
// using std::cout; // namespace pollution
// using std::endl; // namespace pollution
// int main()
//{
// std::cout << std::numbers::pi <<std::endl;
// std::cout << (1 & 3) << std::endl;
// std::cout << (1 | 3) << std::endl;
// std::cout << (1 || 3) << std::endl;
// std::cout << (1 && 3) << std::endl;
// int x {3.2};
// std::cout << x << std::endl;
/*
    double x {3.8};
    int y{x}; //implicit casting
    // int z { (int)x }; //explicit casting
    // int z { static_cast<int>x }; //explicit
   casting std::cout << x << std::endl; std::cout
   << y << std::endl;
*/
// int x { 1 };
// std::cout << typeid(x).name() << std::endl;
// int cnt {};
// int arr [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// for(size_t i=0; i < 10; cnt += arr[i++] > 5)
//     ;
// std::cout << cnt << std::endl;
/*
    int arr[100];
    for(size_t i = 0; i < 20; i++)
        std::cout << arr[i] << std::endl;

    std::cout << "-------" <<std::endl;

    int arr2[100] {};
    for(size_t i = 0; i < 60; i++)
        std::cout << arr2[i] << std::endl;
*/
// typedef  long int Big;
// Big x{1};
// using Big = long int
// int a{2}, b{3};
// std::cout << std::format("{}-{}", a, b) <<
// std::endl; c: enum Weekdays{ Sat, Sun, Mon };
// Weekdays today = Sat;
// c++: enum class Weekdays{ Sat, Sun, Mon };
// Weekdays today = Weekdays::Sat;

// return 0;
//}

// s03
/*
#include <array>
#include <compare>
#include <vector>

// namespace mystd{
//     long x{1L};
//     int f(int x) {return x+1;}
// }
// namespace name
// {

// } // namespace name


// int f(int x)
// {
//     return x+2;
// }

// void disp(std::array<int,20>arr)
// {
//     for(auto x : arr)
//         std::cout << x << ' ';
//     std::cout << std::endl;
// }

int main()
{
    // int a{1000};
    // std::strong_ordering ordering{a <=> 1000 };
    // if(ordering == std::strong_ordering::less)
    //     std::cout << "LESS" << std::endl;
    // else
if(ordering==std::strong_ordering::greater)
    //     std::cout << "Greater" << std::endl;
    // else if(ordering ==
std::strong_ordering::equal)
    //     std::cout << "Equal" << std::endl;

    // std::cout << mystd::f(4) << std::endl;
    // std::cout << mystd::x << std::endl;
    // std::cout << f(4) << std::endl;

    // std::array<int, 30>arr{1,2,3};
    // for(auto x :arr)
    //     std::cout << x << ' ';
    // std::cout << std::endl;
    // std::vector<int>arr{1,2,3};
    // arr.push_back(4);
    // for(auto x :arr)
    //     std::cout << x << ' ';
    // std::cout << std::endl;
    // std::array<int, 20>arr1{1,2,3};
    // std::array<int, 20>arr2{1,2,3, -1};
    // disp(arr1);
    // disp(arr2);
    // if(arr1> arr2)
    //     std::cout<< "LESS" << std::endl;

    // std::vector<int>arr1{0,2,3, 4, 5};
    // std::vector<int>arr2{1,2,3, -1};

    // if(arr1<  arr2)
    //     std::cout<< "LESS" << std::endl;

    // int x{1};
    // int* p1{&x};
    //int** p11{&p1}
    // double d{0.1};
    // double* p2{&d};
    // std::cout << x <<","<< *p1 <<"," << p1 <<
std::endl;
    // std::cout << d <<","<< *p2 <<"," << p2 <<
std::endl;

    int arr[] {1, 2, 3, 4, 5};
    int* p3 {arr};
    std::cout << *p3 << *(p3+1) << *(p3+2) <<
std::endl; return 0;
}
*/

/*
//s04
int main()
{
    // int arr[10]{1, 2, 3, 4};
    // int* p{arr};
    // for(size_t i{}; i < 10; i++)
    //     std::cout << *p++ << std::endl; //arr =
int* const but *p = int*
    // std::cout << arr[1] << " " << *(p+1) <<
std::endl;
    // int N{10};
    // int* arr1{new int[N]};
    // // int arr2{N};
    // for(size_t i{}; i < N; i++){
    //     arr1[i] = i;
    //     std::cout << arr1[i] << std::endl;
    // }
    // delete[] arr1;


    size_t N{10};
    int** arr1{new int*[N]};
    for(size_t i{}; i < N; i++){
        arr1[i] = new int[N];
        for(size_t j{}; j < N; j++)
            arr1[i][j] = j;
        std::cout << arr1[i] << std::endl;
    }
    std::cout << arr1 << " " << arr1[0] << " " <<
arr1[0][0] << std::endl; std::cout << arr1 << " "
<< arr1[1] << " " << arr1[0][1] << std::endl;
    std::cout << arr1 << " " << arr1[1] << " " <<
arr1[0][15] << std::endl; for(size_t i{}; i < N;
i++) delete[] arr1[i]; delete[] arr1;

    int x{};
    int& y = x; // x named y
    y = 10;

    return 0;
}
*/

// docker with gcc in powershell : docker run --rm
// -v  "${PWD}:/app" gcc:latest sh -c "g++
// /app/class.cpp -o /app/class_app &&
// /app/class_app"

/*
//s05

#include <string>
// int lowest(int arr[], size_t N);
// int& lowest(int arr[], size_t N);

// double f1(double x){
//     return x * x;
// }
// double f2(double x) {
//     return x * x * x;
// }

// double integrate(double(*)(double), double a,
double b);

// namespace std{
//     double func1(double a) {return a * a;}
// }

// template<typename T>
// T larger(T a, T b){return a > b ? a : b;};
// const auto& larger(const auto& a, const auto&
b){return a > b ? a : b;};

int main(void)
{
    // // int x{-1};
    // int arr[]{1, 2, 3, 4, 5};
    // //int min{lowert(arr, 5)*2};
    // lowest(arr, 5) = lowest(arr, 5) * 2;
    // std::cout << lowest(arr, 5) << std::endl;
    // // std::cout << lowest(&x, 5) << std::endl;
    // // std::cout << &x << " " << arr <<
std::endl;

    // double (*fp)(double) {f1};
    // std::cout << fp(4) << std::endl;
    // fp = f2;
    // std::cout << fp(4) << std::endl;

    // std::cout << integrate(f1, 1, 2) <<
std::endl;
    // std::cout << integrate(f2, 2, 3) <<
std::endl;

    // std::string s{"Mahbod Cham"};
    // // std::cout << std::func1(3) << std::endl;
    // std::cout << s << std::endl;
    // std::cout << s.c_str() << std::endl;
    // std::cout << s.substr(2, 3) << std::endl;
    // for(auto& ch: s)
    //     ch = std::toupper(ch);
    // std::cout << s << std::endl;

    int a{}, b{2};
    double c{-3}, d{-1.5};
    std::cout << larger(a, b) << std::endl;
    std::cout << larger(c, d) << std::endl;



    return 0;
}

// double integrate(double(*fp)(double), double a,
double b){
//     return fp(a) + fp(b);
// }

// int& lowest(int arr[], size_t N){
//     int& min = arr[0];
//     for(size_t i{}; i < N; i++){
//         // std::cout << arr[i] << " ";
//         if(arr[i] < min)
//             min = arr[i];
//     }
//     // std::cout << std::endl;
//     return min;
// }
// int lowest(int arr[], size_t N){
//     int min{arr[0]};
//     for(size_t i{}; i < N; i++){
//         // std::cout << arr[i] << " ";
//         if(arr[i] < min)
//             min = arr[i];
//     }
//     // std::cout << std::endl;
//     return min;
// }

*/

/*
//s06
#include <array>
#include <optional>
#include <span>
#include <string_view>
#include <vector>

#include "box.h"


// void disp(const std::string& s);
// void disp(std::string_view s){
//     std::cout << s << std::endl;
// }
// void disp(std::span<const double> sp)
// {
//     for(auto x : sp)
//         std::cout << x << " ";
//     std::cout << std::endl;
// }

// struct Box
// {
//     Box(int _W, int _H, int _L=0){ //
constructor
//         L = _L;
//         W = _W;
//         H = _H;
//     }
//     // Box() // default constructor
//     // {
//     //     L = W = H = 0;
//     // }
//     Box() = default;
//     int L, W, H;
// };

int main(){

    // std::optional<std::string> x{"dd"};
    // std::optional<std::string> y{};
    // std::cout << x.has_value() << std::endl;
    // std::cout << y.value_or("NO") << std::endl;

    // std::string s { "sldhfkjsf" };
    // disp(s);
    // std::vector<double> v {1.4, 2, 3, 4, 5};
    // disp(v);
    // std::array<double, 4> arr {1, 2, 3, 4};
    // disp(arr);
    // double arr2[] {1, 2, 3};
    // disp({arr2, 3});

    Box b{1, 2, 3};
    Box b2{};
    Box b3{1, 2};
    Box b4{1};

    std::cout << b.W << " " << b.H << " " << b.L
<< std::endl; b.disp(); std::cout << b2.W << " "
<< b2.H << " " << b2.L << std::endl; b2.disp();
    std::cout << b3.W << " " << b3.H << " " <<
b3.L << std::endl; b3.disp(); std::cout << b4.W <<
" " << b4.H << " " << b4.L << std::endl;
    b4.disp();
    return 0;
}

*/

/*
//s07

#include "box.h"

void disp(Box b){
    b.disp();
}
// void disp(Box& b){
//     b.disp();
// }

int main()
{
    // std::cout << Box::m_count << std::endl;
    Box b {1, 2, 3 };
    // Box b2 {1, 2, 3 };
    // const Box b {1, 2, 3 };
    // b.W = 100;
    // b.setW(-10);
    // b.setW(-10) -> setH(10) -> setL(10);
    // std::cout << b.getW() << std::endl;
    // b.disp();
    // std::cout << Box::m_count << std::endl;
    // Box b2 {b};
    disp(b);
    std::cout << b.m_count << std::endl;
    // b2.disp();
    return 0;

}

*/
/*
// s08
#include "box.h"
#include "vector.h"

int main() {
    // Vector v { 10 };
    // v.fill();
    // v.disp();
    // // Vector v2 { v };
    // // v2.arr[0] = -100;
    // // v2.disp();
    // v.push_back(10);
    // v.disp();
    // Vector v[5] { 2, 3, 4, 5 };
    // v[0].fill();
    // v[0].disp();
    // v[1].fill();
    // v[1].disp();

    int *arr{new int[3]};
    delete[] arr;

    Vector *arr2 { new Vector[3] };
    delete[] arr2;
    return 0;
}

*/
/*
// s09
#include "box.h"
#include "vector.h"
#include <memory>


int main() {
    // std::shared_ptr<Box[]> arr { new Box[10] };
    // std::shared_ptr<Box> p { new Box };
    // arr[0].disp();
    // arr.use_count();
    // p->disp();
    // std::unique_ptr<Box> x { std::make_unique<Box>(3) };
    // std::unique_ptr<Box[]> z { std::make_unique<Box[]>(3) };

    // Vector v1 { 3 };
    // Vector v2 { 4 };
    // if (v1 < v2) {
    //     std::cout << "LESS" << std::endl;
    // }
    // if (v2 > v1) {
    //     std::cout << "True" << std::endl;
    // }
    // if (v2 == 4)
    //     std::cout << "True" << std::endl;
    // if (v2 == v1)
    //     std::cout << "False" << std::endl;

    // if (v2 != v1)
    //     std::cout << "False" << std::endl;

    // if (v2 >= v1)
    //     std::cout << "True" << std::endl;

    // if (v2 >= 4)
    //     std::cout << "True" << std::endl;

    // if(v2 < 5){
    //     std::cout << "True" << std::endl;
    // }
    // if (2 < v1) {
    //     std::cout << "LESS" << std::endl;
    // }

    Vector v1 { 3 };
    v1.fill();
    // for (size_t i {}; i < v1.size(); i++)
    //     std::cout << v1[i] << " ";
    // std::cout << std::endl;
    std::cout << v1 << std::endl;
    return 0;
}

*/

/*
// s10

#include "box.h"
#include "vector.h"
#include <memory>

int main() {
    Vector v { 3 };
    v.fill();
    std::cout << v << std::endl;
    // ++v;
    // std::cout << v << std::endl;
    // ++v;
    // std::cout << v << std::endl;
    // ++ ++v;
    // std::cout << v << std::endl;

    // v++;
    // std::cout << v << std::endl;

    // v += v;
    // std::cout << v << std::endl;

    Vector v2 { 5 };
    v2.fill();
    v += v2;
    std::cout << v << std::endl;

    // std::cout << v + v << std::endl;
    return 0;
}

*/

/*
// s11

#include "vector.h"

int main() {
    // Vector v { 3 };
    // v.fill();
    // v.disp();
    // int x { v };
    // std::cout << x << std::endl;
    // Vector v2 { 10 };
    // v2.fill();
    // v2.disp();
    // int x2 { static_cast<int>(v2) };
    // std::cout << x2 << std::endl;

    // Vector v { 10 };
    // Vector v2 { v + v }; // v2 <-> _v return value optimization
    // std::cout << v << std::endl;
    // std::cout << v2 << std::endl;

    // Vector v { 5 };
    // Vector v2 { 10 };
    // v.fill();
    // v2.fill();
    // v.disp();
    // v2.disp();
    // v = v2;
    // v.disp();
    // v2.disp();

    // Vector v = Vector { 10 }; // => Vector v { Vector { 10 } }

    Vector v { 5 };
    Vector v2 { 10 };
    v.fill();
    v2.fill();
    v.disp();
    v2.disp();
    // Vector tmp { v };
    // v = v2;
    // v2 = tmp;
    // v.disp();
    // v2.disp();
    // Vector tmp { std::move(v) };
    // v = std::move(v2);
    // v2 = std::move(tmp);
    // v.disp();
    // v2.disp();
    std::swap(v, v2);

    return 0;
}
    */

/*

// s12

#include "vector2d.h"
#include <iostream>


int main() {
    // Vector2d v { 3, 5 };
    // Vector2d v2 { v };
    // v = v2;
    Vector2d v { 3, 5 };
    Vector2d v2 { 2, 3 };
    std::swap(v, v2);

    return 0;
}

*/

/*

//s13

#include "vector2d.h"
#include <memory>
#include <vector>

int main() {
    Vector2d v { 3, 5 };
    // v.fill();
    // Vector2d *p { &v };
    // p->fill();
    // Vector *p { &v };
    // p->fill();
    // Vector& p = v;
    // p.fill();

    // Vector *p { new Vector2d  { 4, 5  } };
    // delete p;
    // p->fill();
    // Vector2d *p { new Vector2d[3] { { 1, 2 }, { 2, 3 }, { 4, 5 } } };
    // Vector2d *p2 { dynamic_cast<Vector2d *>(p) };
    // p2[0].fill2();
    // delete[] dynamic_cast<Vector2d *>(p);
    // std::shared_ptr<Vector2d> p { std::make_shared<Vector2d>(2, 3) };
    //std::shared_ptr<Vector> p2 { std::make_shared<Vector2d>(2, 3) };

    // std::vector<Vector> v;



    return 0;
}

*/

/*

// s14

#include "temp_vector.h"

int main() {
    Vector<int> v { 4 };
    v.fill();
    v.disp();
    // Vector<double> v2 { 10 };
    // v2.fill();
    // v2.disp();

    // v.push_back(100);
    // v.disp();

    // v.push_back(100.1);
    // v.disp();

    // v2.push_back(10.1);
    // v2.disp();

    // if (v < 10)
    //     v.disp();

    // if (v < v)
    //     v.disp();

    v[0] = 100;
    std::cout << v[0] << std::endl;
    v.disp();

    // const Vector<int> v2 { 10 };
    // v2[0] = 100;
    // std::cout << v2[0] << std::endl;
    // v2.disp();

    // int x { 4 };
    // const int *p { &x };
    // int *p2 = const_cast<int *>(p);
    // *p2 = 10;

    return 0;
}

*/

/*

// s15
// #include "temp_vector.h"

#include "stack.h"

int main() {
    // Vector<int> v { 4 };
    // v.fill();
    // return 0;
    Stack<int> s;
    std::cout << s.is_empty() << std::endl;

    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << s.is_empty() << std::endl;

    for (size_t i = 0; i < 3; i++)
    std::cout << s.pop() << " ";
    std::cout << std::endl;

    std::cout << s.is_empty() << std::endl;
    return 0;
}

*/

/*

// s16

// #include "stack.h"
#include <vector>
// long find_minimum(const long* array, size_t size){
//     long min { array[0] };

//     for (size_t i {1}; i < size;i++)
//         if(array[i] < min)
//             min = array[i];

//     return min;
// }
// template <typename T> T find_minimum(const std::vector<T> &array) {
//     T min { array[0] };

//     for (size_t i { 1 }; i < array.size(); i++)
//         if (array[i] < min)
//             min = array[i];

//     return min;
// }
template <typename T>
T find_optimimum(const std::vector<T> &array, bool (*comp)(const T &a, const T &b)) {
    T opt { array[0] };

    for (size_t i { 1 }; i < array.size(); i++)
        if (comp(array[i], opt))
            opt = array[i];

    return opt;
}

bool smaller(const long &a, const long &b) {
    return a < b;
}
bool larger(const long &a, const long &b) {
    return a > b;
}

int main() {
    // Stack<int> s;

    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);

    // Stack<int> s2 { s };
    // for (size_t i = 0; i < 5; i++)
    //     std::cout << s2.pop() << " ";
    // std::cout << std::endl;

    // long arr[] { 1, 2, 3, 4, 5, 6 };
    std::vector<long> v { 1, 2, 3, 4, 5, 6 };
    // std::cout << find_minimum(v) << std::endl;
    std::cout << find_optimimum(v, smaller) << std::endl;
    std::cout << find_optimimum(v, larger) << std::endl;

    return 0;
}

*/

/*

// s17

#include "util.h"
#include <algorithm>
#include <vector>

int main() {

    std::vector<long> v { 1, 2, 3, 4, 5, 6 };
    // std::cout << find_optimum(v, smaller) << std::endl;
    // std::cout << find_optimum(v, smaller<long>) << std::endl;
    // std::cout << find_optimum(v, smaller<>) << std::endl;
    // std::cout << find_optimum(v, larger) << std::endl;
    // std::cout << *find_optimum(v, smaller) << std::endl;
    // std::cout << *find_optimum(v, smaller<long>) << std::endl;
    // std::cout << *find_optimum(v, smaller<>) << std::endl;
    // std::cout << *find_optimum(v, larger) << std::endl;
    // Less less {};
    // std::cout << *find_optimum(v, less) << std::endl;
    // Less<long> less {};
    // std::cout << *find_optimum(v, less) << std::endl;
    // Nearer nearer { 4 };
    // std::cout << *find_optimum(v, nearer) << std::endl;
    // std::cout << *find_optimum(v, larger) << std::endl;
    // std::cout << *find_optimum(v, smaller<long>) << std::endl;
    // std::cout << *find_optimum(v, Less<long> {}) << std::endl;
    // std::cout << *find_optimum(v, std::less<long> {}) << std::endl;
    // std::cout << *find_optimum(v, std::less<> {}) << std::endl;
    // auto less { [](const long &a, const long &b) { return a < b; } };
    auto less { []<typename T>(const T &a, const T &b) { return a < b; } };
    std::cout << *find_optimum(v, less) << std::endl;

    return 0;
}
*/

/*
// s18

#include "util.h"
#include <algorithm>
#include <deque>
#include <functional>
#include <queue>
#include <stack>
#include <vector>

int main() {
    std::vector<long> v { 1, 2, 3, 4, 5, 6 };
    double X { 3.2 };

    auto greater { [](const auto &a, const auto &b) { return a > b; } };
    // std::cout << *find_optimum(v, greater) << std::endl;
    auto less { []<typename T>(const T &a, const T &b) { return a < b; } };

    auto nearer { [&X](const auto &a, const auto &b) {
        return std::abs(a - X) < std::abs(b - X);
    } };

    // std::cout << *find_optimum(v, nearer) << std::endl;

    std::vector<std::function<bool(long, long)>> funcs;

    funcs.push_back(larger);
    funcs.push_back(smaller<long>);
    funcs.push_back(Less<long> {});
    funcs.push_back(Nearer<long> { X });
    funcs.push_back(std::less<> {});
    funcs.push_back(less);
    funcs.push_back(greater);
    funcs.push_back(nearer);

    for (auto func : funcs)
        std::cout << *find_optimum(v, func) << " " << *min_element(v.begin(), v.end(), func)
                  << std::endl;

    std::deque<int> d { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    disp(d.begin(), d.end());

    d.push_back(11);
    d.push_front(0);

    disp(d.begin(), d.end());

    std::queue<int> q { d };
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    std::stack<int> s { d };
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}

*/

/*

// s19

#include "util.h"
#include <functional>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

int main() {
    double X { 3.2 };
    auto nearer { [&X](const auto &a, const auto &b) {
        return std::abs(a - X) < std::abs(b - X);
    } };
    std::deque<int> d { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::deque<int> d2 { 1, 2, 3, 4, 5, 6, 7, 8, 8, 7, 8, 9, 10 };

    disp(d.begin(), d.end());

    d.push_back(11);
    d.push_front(0);

    disp(d.begin(), d.end());

    std::queue<int> q { d };
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    std::stack<int> s { d };
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    // std::priority_queue<int> p {};
    // p.push(1);
    // p.push(2);
    // p.push(3);
    // p.push(-1);
    // p.push(-2);
    // p.push(100);

    // while (!p.empty())
    // {
    //     std::cout << p.top() << " ";
    //     p.pop();
    // }
    // std::cout << std::endl;
    // std::priority_queue<int, std::vector<int>, std::less<>> p {};
    // std::priority_queue<int, std::vector<int>, std::greater<>> p {};
    // std::priority_queue<int, std::vector<int>, Nearer<int>> p { Nearer<int> { X } };
    std::priority_queue<int, std::vector<int>, decltype(nearer)> p { nearer };
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(-1);
    p.push(-2);
    p.push(100);

    while (!p.empty()) {
        std::cout << p.top() << " ";
        p.pop();
    }
    std::cout << std::endl;

    double x1 { 1 }, y1 { 1 };
    // auto pq_less { [](const Point &a, const Point &b) { return a.mag() < b.mag(); } };
    auto pq_less { [&x1, &y1](const Point &a, const Point &b) {
        return (a.X - x1) * (a.X - x1) + (a.Y - y1) * (a.Y - y1) >
               (b.X - x1) * (b.X - x1) + (b.Y - y1) * (b.Y - y1);
    } };
    // std::priority_queue<Point, std::vector<Point>,  decltype(pq_less)> pq {pq_less};
    std::priority_queue<Point, std::vector<Point>, std::function<bool(Point, Point)>> pq {
        pq_less
    };
    pq.push(Point { 1, 2 });
    pq.push(Point { 2, 3 });
    pq.push(Point { 3, 2 });
    pq.push(Point { -3, -2 });
    pq.push(Point { 0, 0 });
    pq.push(Point { 4, 4 });

    while (!pq.empty()) {
        std::cout << pq.top().X << ", " << pq.top().Y << std::endl;
        pq.pop();
    }

    std::set<int, std::less<>> my_set { d2.begin(), d2.end() };
    disp(my_set.begin(), my_set.end());

    std::set<int, std::greater<>> my_set1 { d2.begin(), d2.end() };
    disp(my_set1.begin(), my_set1.end());

    std::unordered_set<int> my_set2 { d2.begin(), d2.end() };
    disp(my_set2.begin(), my_set2.end());

    std::map<std::string, long long> students {};
    students["ldhflkasdhf"] = 916373;
    students["slkdfhslkdhf"] = 9125878;
    students["sldfhakjf"] = 7552272;
    students["ewporuwieur"] = 1768767;
    for (const auto &[name, num] : students)
        std::cout << name << ": " << num << std::endl;

    std::map<std::string, long> text {};
    text["is"] += 1;
    for (const auto &[word, count] : text)
        std::cout << word << ": " << count << std::endl;

    auto iter { text.find("is") };
    if(iter != text.end())
        std::cout << iter->first << " " << iter->second << std::endl;

    std::vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f'};
    // std::vector<char>::iterator iter2 { letters.begin() };
    std::vector<char>::const_iterator iter2 { letters.cbegin() };

    // std::cout << *iter2 << " " << *(iter2+1) << std::endl;
    // iter2++;
    // *iter2 = 'x';
    // std::cout << *iter2 << std::endl;
    // disp(letters.begin(), letters.end());

    for (auto it { letters.begin() }; it != letters.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    disp(letters.cbegin(), letters.cend());
    disp(letters.rbegin(), letters.rend());
    disp(letters.crbegin(), letters.crend());

    return 0;
}

*/