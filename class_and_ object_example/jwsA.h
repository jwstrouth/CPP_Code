/* @file jwsA.h
 *
 * @brief the class jwsA declaration for this classes and objects example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#ifndef JWSA_H
#define JWSA_H

#include <iostream>
using namespace std;

class jwsA
{
    public:
        jwsA();
        virtual ~jwsA();

        void set(int a){ i = a; }
        friend void showi(jwsA x);

    protected:

    private:
        int i;
};

#endif // JWSA_H
