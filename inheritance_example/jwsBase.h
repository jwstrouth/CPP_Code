/**
 * @file jwsBase.h
 *
 * @brief base class declaration for this inheritance example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */


#ifndef JWSBASE_H
#define JWSBASE_H

#include <iostream>
using namespace std;

class jwsBase
{
    public:
        jwsBase();
        virtual ~jwsBase();

        void set(int a, int b){ i = a; j = b; }
        void show(){ cout << "i; " << i << ", j: " << j << "\n"; }

    protected:

    private:
        int i, j;
};

#endif // JWSBASE_H
