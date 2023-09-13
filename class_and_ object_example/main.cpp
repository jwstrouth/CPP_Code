/* @file main.cpp
 *
 * @brief the main entry point for this classes and objects example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include <iostream>
using namespace std;

#include <jwsA.h>

int main(int argc, char **argv)
{
    jwsA a;

    a.set(10);

    showi(a);

    return 0;
}
