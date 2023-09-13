#ifndef JWSFARENHEITTOCELSIUS_H
#define JWSFARENHEITTOCELSIUS_H

#include <jwsConvert.h>


class jwsFarenheitToCelsius : public jwsConvert
{
    public:
        jwsFarenheitToCelsius(double i);
        virtual ~jwsFarenheitToCelsius();

        void compute()
        {
            val2 = val1 / 1.8;
        }

    protected:

    private:
};

#endif // JWSFARENHEITTOCELSIUS_H
