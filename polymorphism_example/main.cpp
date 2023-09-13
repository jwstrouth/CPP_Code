/* @file main.cpp
 *
 * @brief the main entry point for this polymorphism example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include <iostream>
using namespace std;

//#include <jwsConvert.h>
#include <jwsLiterToGallon.h>

int main(int argc, char **argv)
{
    //jwsConvert c; compile error due to pure virtual function
    jwsLiterToGallon l_to_g(4);
    jwsConvert *p;

    p = &l_to_g;
    cout << p->getinit() << " liters is ";
    p->compute();
    cout << p->getconv() << " gallons\n";

    return 0;
}

