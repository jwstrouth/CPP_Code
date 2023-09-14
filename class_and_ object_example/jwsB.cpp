/* @file jwsB.cpp
 *
 * @brief the class jwsB implementation for this classes and objects example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include <jwsB.h>
#include <jwsA.h>

jwsB::jwsB()
{
    cout << "jwsB()\n";
    cout << "jwsB address: " << this << "\n";
}

jwsB::~jwsB()
{
    cout << "~jwsB()\n";
}

// will see jwsA passed by value copy constructor/destructor printout
void jwsB::showi(jwsA x)
{
    cout << "jwsA::i (jwsB::showi()) = " << x.i << "\n";
}

