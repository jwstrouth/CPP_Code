/**
 * @file jwsDerived1.h
 *
 * @brief derived class 1 declaration for this inheritance example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */


#ifndef JWSDERIVED1_H
#define JWSDERIVED1_H

#include <jwsBase.h>

// change to virtual so we only have one jwsBase copy
//class jwsDerived1 : public jwsBase
class jwsDerived1 : virtual jwsBase
{
    public:
        jwsDerived1();
        virtual ~jwsDerived1();

        void setk(int c){ k = c; }
        void showk(){ cout << "k; " << k << "\n"; }
        int k;

    protected:

    private:
};

#endif // JWSDERIVED1_H
