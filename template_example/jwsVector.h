/* @file jwsVector.h
 *
 * @brief vector class declaration used by template example
 *
 * vector are used when you need array type abilities
 *
 * vector class overloads the following
 * [], =, ==, <, <=, >, >=
 *
 *
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#ifndef JWSVECTOR_H
#define JWSVECTOR_H

#include <vector>
#include <iostream>
using namespace std;

template<class VT> class jwsVector
{
    public:
        jwsVector();
        virtual ~jwsVector();

        void show();
        void run();

    protected:

    private:
        vector<VT> m_data;
};

#endif // JWSVECTOR_H
