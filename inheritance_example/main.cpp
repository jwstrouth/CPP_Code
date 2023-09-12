/**
 * @file main.cpp
 *
 * @brief the main entry point for this inheritance example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include <iostream>
using namespace std;

#include <jwsDerived3.h>

int main(int argc, char **argv)
{
    jwsDerived3 deriverd3;

    //deriverd3.set(20,30); // can't access because jwsBase is virtual
    deriverd3.setk(3);
    deriverd3.showk();
    deriverd3.setl(4);
    deriverd3.showl();
    deriverd3.set(5);
    deriverd3.showm();

    return 0;
}
