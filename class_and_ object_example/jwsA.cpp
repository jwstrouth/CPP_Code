/* @file jwsA.cpp
 *
 * @brief the class jwsA implementation for this classes and objects example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include <jwsA.h>
#include <jwsB.h>

int jwsA::x = 30;
jwsA *pA = 0;

jwsA::jwsA()
{
    pA = this;
    cout << "jwsA()\n";
    cout << "jwsA address: " << this << "\n";
}

jwsA::~jwsA()
{
    cout << "~jwsA()\n";
}

// will see jwsB pass by value copy constructor/destructor printout
void jwsA::showj(jwsB x)
{
    cout << "jwsB::j (jwsA::showj()) = " << x.j << "\n";
}

void jwsA::staticfunc()
{
    if(pA)
    {
        pA->sety(50);
        cout << "show y from staticfunc()\n";
        pA->showy();
    }
}

void jwsA::showy()
{
    cout << "jwsA::y = " << y << "\n";
}

// showi function is friends with jwsA class and can get access with jwsA::i data
// also see jwsA passed by value copy constructor/destructor printout
void showi(jwsA x)
{
    cout << "jwsA::i (showi()) = " << x.i << "\n";
}

void showx()
{
    cout << "jwsA::x (static) = " << jwsA::x << "\n";
}

