#include "box.h"
#include <iostream> 
#include <exception>

/*

//s06
// Box::Box(int _W, int _H, int _L){ // constructor
//     L = _L;
//     W = _W;
//     H = _H;
// }



// Box::Box() // default constructor
// {
//     L = W = H = 0;
// }

// Box::Box(int _W)
// {
//     W = _W;
//     L = H = 0;
// }


Box::Box(int _W, int _H, int _L) : L {_L}, W{_W}, H{_H}
{ 
    
}

Box::Box(int _W) : Box {_W, 0, 0}
{
}

Box::Box() : Box {0} // default constructor
{

}

void Box::disp(){
    std::cout << L << " " << W << " " << H << std::endl;
}

*/

// s07


Box::Box(int _L, int _W, int _H) : L {_L}, W{_W}, H{_H}
{ 
    std::cout << this << " contructor 3 member variable" << std::endl;
    m_count++;
}

Box::Box(int _L) : Box {_L, 0, 0}
{
    std::cout << "contructor 1 member variable" << std::endl;
    m_count++;
    
}

Box::Box() : Box {0} // default constructor
{
    std::cout << " default contructor 3 member variable" << std::endl;
    m_count++;
}   

Box::Box(const Box& b)
{
    std::cout << "copy constructor" << std::endl;
    L = b.L;
    W = b.W;
    H = b.H;
    m_count++;
}
Box::~Box(){
    std::cout << "destructor: I am dying ..." << std::endl;
    m_count--;
}

void Box::disp() const{
    std::cout << L << " " << W << " " << H << std::endl;
}

Box*  Box::setW(int _W)
{
    if(_W >= 0)
        W  = _W;
    else 
        // throw new std::invalid_argument{ "W error" };
        std::cerr << "W should be bigger than 0" << std::endl;
    return this;
}
Box*  Box::setH(int _H)
{
    if(_H >= 0)
        H  = _H;
    else 
        // throw new std::invalid_argument{ "W error" };
        std::cerr << "H should be bigger than 0" << std::endl;
    return this;
}
Box*  Box::setL(int _L)
{
    if(_L >= 0)
        L  = _L;
    else 
        // throw new std::invalid_argument{ "W error" };
        std::cerr << "L should be bigger than 0" << std::endl;
    return this;
}
