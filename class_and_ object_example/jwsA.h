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

class jwsB; // forward declaration

class jwsA
{
    public:
        jwsA();
        jwsA(const jwsA &a){ cout << "jwsA() copy constructor\n"; }
        virtual ~jwsA();

        void seti(int a){ i = a; cout << "set jwsA::i = " << i << "\n"; }
        void sety(int b){ y = b; cout << "set jwsA::y = " << y << "\n"; }
        void showy();
        void showj(jwsB x);
        // friend function
        friend void showi(jwsA x);

    protected:

    private:
        int i;
        // friend class
        friend class jwsB;
        int y;

    //static member
    public:
        static int x;
        static void staticfunc();
};

void showx();

#endif // JWSA_H
