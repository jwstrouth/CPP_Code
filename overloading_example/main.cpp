#include <iostream>

using namespace std;

#include "jwsData.h"
#include "jwsListCollection.h"

int main()
{
    jwsData ob1(10), ob2(20), old(0), temp(0);
    jwsListCollection dataCol; // list container or collection
    int i = 0;

    // adds and shows 10 + 20 that equals 30
    ob1 = ob1 + ob2;
    ob1.Show();

    // prefix incrementation of 30 by 1 and shows it as 31
    ++ob1;
    ob1.Show();

    // postfix incrementation of 31 by 1 (returns old value) and shows it as 32
    old = ob1++;
    cout << "Show old value...";
    old.Show();
    ob1.Show();

    // overloaded operator+ to push jwsData object to front of list (ob1, ob2, old)
    dataCol.Show();
    dataCol + ob1;
    dataCol + ob2;
    dataCol + old;
    dataCol.Show();
    // overload operator[] and walk through collection and show ob1, ob2, and old
    for(i=0;i<3;i++)
    {
        switch(i)
        {
        case 0: cout << "ob1:"; break;
        case 1: cout << "ob2:"; break;
        case 2: cout << "old:"; break;
        }
        temp = dataCol[i];
        temp.Show();
    }

    return 0;
}
