/* @file jwsConvert.h
 *
 * @brief convert base class declaration with pure virtual function
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#ifndef JWSCONVERT_H
#define JWSCONVERT_H


class jwsConvert
{
    public:
        jwsConvert(double i);
        virtual ~jwsConvert();

        double getconv(){ return val2; }
        double getinit(){ return val1; }

        virtual void compute() = 0; // pure virtual function and must be defined in derived class

    protected:
        double val1;
        double val2;

    private:
};

#endif // JWSCONVERT_H
