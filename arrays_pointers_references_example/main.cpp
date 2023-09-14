/* @file main.cpp
 *
 * @brief the main entry point for this arrays, pointers, references example
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

#include <iostream>
using namespace std;

#include <jwsMyClass.h>

int main(int argc, char **argv)
{
    jwsMyClass mc[3];
    jwsMyClass *p = mc; // pointer to class array

    // pointer to class members
    jwsMyClass mc1;
    jwsMyClass *p1 = &mc1;
    int jwsMyClass::*data;
    void (jwsMyClass::*f)();

    // references
    jwsMyClass &ref = mc1;

    // new and delete
    jwsMyClass *pMC = new jwsMyClass;

    cout << "3 element array\n";

    // first element of array
    mc[0].set(0);
    // second element of the array
    p++;
    p->set(1);
    // third element of the array
    mc[2].set(2);

    mc[0].show();
    p->show();
    p++;
    p->show();

    cout << "loop through array\n";
    for(int i=0;i<3;i++)
    {
        mc[i].show();
    }

    cout << "pointer to member\n";
    data = &jwsMyClass::myData;
    p1->*data = 100;
    f = &jwsMyClass::showMyData;
    (p1->*f)();

    cout << "reference to class\n";
    ref.set(300);
    ref.show();
    ref.showMyData();

    cout << "new and delete\n";
    pMC->set(500);
    pMC->show();
    delete pMC;

    return 0;
}
