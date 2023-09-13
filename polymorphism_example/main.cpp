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
#include <jwsFarenheitToCelsius.h>

int main(int argc, char **argv)
{
    //jwsConvert c; compile error due to pure virtual function
    jwsLiterToGallon l_to_g(4);
    jwsConvert *p;
    jwsFarenheitToCelsius f_to_c(75);

    p = &l_to_g;
    cout << p->getinit() << " liters is ";
    p->compute();
    cout << p->getconv() << " gallons\n";

    p = &f_to_c;
    cout << p->getinit() << " farenheit is ";
    p->compute();
    cout << p->getconv() << " celsius\n";

    return 0;
}

