/* @file jwsConvert.cpp
 *
 * @brief convert base class implementation with pure virtual function
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include "jwsConvert.h"

#include <iostream>
using namespace std;

jwsConvert::jwsConvert(double i)
{
    val1 = i;
    cout << "jwsConvert()\n";
}

jwsConvert::~jwsConvert()
{
    cout << "~jwsConvert()\n";
}
