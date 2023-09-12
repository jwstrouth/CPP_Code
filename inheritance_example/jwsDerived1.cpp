/**
 * @file jwsDerived1.cpp
 *
 * @brief derived class 1 imlpementation for this inheritance example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include "jwsDerived1.h"

jwsDerived1::jwsDerived1()
{
    cout << "jwsDerived1()" << "\n";

    // set jwsBase here since it can't be access externally
    jwsBase::set(1,2);
    jwsBase::show();
}

jwsDerived1::~jwsDerived1()
{
    cout << "~jwsDerived1()" << "\n";
}
