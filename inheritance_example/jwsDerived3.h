/**
 * @file jwsDerived3.h
 *
 * @brief derived class 3 declaration for this inheritance example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#ifndef JWSDERIVED3_H
#define JWSDERIVED3_H

#include <jwsDerived1.h>
#include <jwsDerived2.h>

class jwsDerived3: public jwsDerived1, public jwsDerived2
{
    public:
        jwsDerived3();
        virtual ~jwsDerived3();

        void set(int e){ m = e; }
        void showm(){ cout << "m; " << m << "\n"; }

    protected:

    private:
        int m;
};

#endif // JWSDERIVED3_H
