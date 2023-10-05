/*
 Class template std::function is a general-purpose
 polymorphic function wrapper. Instances of
 std::function can store, copy, and invoke any
 CopyConstructible Callable target --
 functions (via pointers thereto), lambda expressions,
  bind expressions, or other function objects,
  as well as pointers to member functions and
  pointers to data members.

 */

#include <iostream>
#include <functional>

using namespace std;

// a function
int retx(int x){ return x; }

// a function object class
struct half
{
    int operator()(int x){ return x/2; }
};

// a class with data member
struct third
{
    third(int val) : value(val) {}
    int value;
    int retval(){ return value/3; }
};



int main()
{
    function<int(int)> fn1 = retx; // function
    function<int(int)> fn2 = &retx; // function pointer
    function<int(int)> fn3 = half(); // function operator
    function<int(int)> fn4 = [](int x){ return x; }; // lambda expression
    function<int(third&)> fn5 = &third::retval; // pointer to member function
    function<int()> fn6 = bind(retx, 50); // bind function to initial value

    third sixty(60);

    cout << "fn1(60): " << fn1(60) << endl;
    cout << "fn2(60): " << fn2(60) << endl;
    cout << "fn3(60): " << fn3(60) << endl;
    cout << "fn4(60): " << fn4(60) << endl;
    cout << "fn5(60): " << fn5(sixty) << endl;
    cout << "fn5(60): " << fn6() << endl;

    return 0;
}
