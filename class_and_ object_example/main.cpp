/* @file main.cpp
 *
 * @brief the main entry point for this classes and objects example
 *
 * NOTE: I had to hack with the compiler to get this to build.  Need to look into
 * the proper use of the keyword friend.  Pay attention to pass by value that uses
 * copy constructor.
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include <iostream>
using namespace std;

#include <jwsA.h>
#include <jwsB.h>

int main(int argc, char **argv)
{
    jwsA a;
    jwsB b;
    jwsA a1;

    a.seti(10);
    b.set(20);
    a1.seti(100);

    // show friend use of classes jwsA and jwsB
    showi(a);
    b.showi(a);
    a.showj(b);

    // show use of static members of jwsA::x
    showx();
    jwsA::x = 40;
    cout << "changed the value of jwsA::x\n";
    showx();
    jwsA::staticfunc();

    // assign object a to a1
    a = a1;
    cout << "assigned a to a1 with different i value\n";
    b.showi(a);
    jwsA::staticfunc();

    return 0;
}
