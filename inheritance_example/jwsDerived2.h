/**
 * @file jwsDerived2.cpp
 *
 * @brief derived class 2 declaration for this inheritance example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#ifndef JWSDERIVED2_H
#define JWSDERIVED2_H

#include <jwsBase.h>


// change to virtual so we only have one jwsBase copy
//class jwsDerived2 : public jwsBase
class jwsDerived2 : virtual jwsBase
{
    public:
        jwsDerived2();
        virtual ~jwsDerived2();

        void setl(int d){ l = d; }
        void showl(){ cout << "l; " << l << "\n"; }

    protected:

    private:
        int l;
};

#endif // JWSDERIVED2_H
