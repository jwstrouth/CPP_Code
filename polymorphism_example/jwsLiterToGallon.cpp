/* @file jwsLiterToGallon.cpp
 *
 * @brief liter to gallon derived class implementation that defines pure virtual function in base class
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include "jwsLiterToGallon.h"

#include <iostream>
using namespace std;

jwsLiterToGallon::jwsLiterToGallon(double i) : jwsConvert(i) // passing constructor parameter to base class
{
    cout << "jwsLiterToGallon()\n";
}

jwsLiterToGallon::~jwsLiterToGallon()
{
    cout << "~jwsLiterToGallon()\n";
}
