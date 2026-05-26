#ifndef BOX_H
#define BOX_H
#include <iostream>

/*
//s06
struct Box
{
    Box(int W, int H, int L=0);
    Box();
    Box(int W); // constructor
    // Box() = default;
    void disp(); // method
    const int L, W, H; // member variable
};
*/

//s07
struct Box
{
    Box(int L, int W, int H=0);
    Box();
    Box(int L); // constructor
    Box(const Box& b);
    // Box() = default;
    ~Box(); //destructor
    void disp() const; // method
    Box* setW(int w);
    Box* setH(int w);
    Box* setL(int w);
    int getW() const { return W;}
    int getL() const { return L;}
    int getH() const { return H;}
    // void setW(int w);
    // void setH(int w);
    // void setL(int w);
    static inline size_t m_count{};
private:
    int L, W, H; // member variable
};

// class Box
// {
//    Public:
//     Box(int L, int W, int H=0);
//     Box();
//     Box(int L); // constructor
//     // Box() = default;
//     void disp(); // method
//     void setw(int w);
// private:
//     int L, W, H; // member variable
// };
#endif