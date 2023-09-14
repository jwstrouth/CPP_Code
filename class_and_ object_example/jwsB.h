/* @file jwsB.h
 *
 * @brief the class jwsB declaration for this classes and objects example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#ifndef JWSB_H
#define JWSB_H

#include <iostream>
using namespace std;

class jwsA; //forward declaration

class jwsB
{
    public:
        jwsB();
        jwsB(const jwsB &b){ cout << "jwsB() copy constructor\n"; }
        virtual ~jwsB();

        void set(int b){ j = b; cout << "set jwsB::i = " << j << "\n"; }
        void showi(jwsA x);

    protected:

    private:
        int j;
        // friend class
        friend class jwsA;
};

#endif // JWSB_H
