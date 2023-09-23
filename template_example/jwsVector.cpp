/* @file jwsVector.cpp
 *
 * @brief vector class implementation used by template example
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

#include "jwsVector.h"

template <class VT> jwsVector<VT>::jwsVector()
{
    //ctor
}

template <class VT> jwsVector<VT>::~jwsVector()
{
    //dtor
}

template<class VT> void jwsVector<VT>::show()
{
    cout << "Current contents of data:\n";
    for(int i=0;i<m_data.size();i++)
    {
        cout << m_data[i] << " ";
    }
    cout << endl;
}

template<class VT> void jwsVector<VT>::run()
{
    char more;
    VT d;

    do
    {
      cout << "Add data: ";
      cin >> d;

      m_data.push_back(d);
      show();

      cout << "More? (y/n): ";
      cin >> more;

      cout << "<" << more << ">\n";  // check overflow

    } while(more != 'n');
}

// need to compile
template class jwsVector<int>;
template class jwsVector<float>;
template class jwsVector<double>;
template class jwsVector<char>;
