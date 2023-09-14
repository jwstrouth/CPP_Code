/* @file jwsMyClass.h
 *
 * @brief the jwsMyClass declaration for this arrays, pointers, references example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#ifndef JWSMYCLASS_H
#define JWSMYCLASS_H

#include <iostream>
using namespace std;

class jwsMyClass
{
    public:
        jwsMyClass();
        virtual ~jwsMyClass();

        void set(int x){ myVar = x; }
        void show(){ cout << "jwsMyClass: address: " << this << ", myVar: " << myVar << "\n"; }
        void showMyData(){ cout << "jwsMyClass::myData: " << myData << "\n"; }

        int myData;

    protected:

    private:
        int myVar;
};

#endif // JWSMYCLASS_H
