/* @file jwsLiterToGallon.h
 *
 * @brief liter to gallon derived class declaration that defines pure virtual function in base class
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#ifndef JWSLITERTOGALLON_H
#define JWSLITERTOGALLON_H

#include <jwsConvert.h>


class jwsLiterToGallon : public jwsConvert
{
    public:
        jwsLiterToGallon(double i);
        virtual ~jwsLiterToGallon();

        void compute()
        {
            val2 = val1 / 3.7854;
        }

    protected:

    private:
};

#endif // JWSLITERTOGALLON_H
