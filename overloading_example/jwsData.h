#ifndef JWSDATA_H
#define JWSDATA_H

#include <iostream>
using namespace std;

class jwsData
{
    public:
        jwsData(int i);
        virtual ~jwsData();
        jwsData(const jwsData &a)
        {
            m_data = a.m_data;
            cout << "jwsData Copy Constructor: Address: " << this << endl;
        }

        void SetData(int i){ m_data = i; }
        void Show()
        {
            cout << "address: " << this << ", data: " << m_data << endl;
        }
        jwsData operator+(jwsData data);
        jwsData operator++(); // prefix
        jwsData operator++(int x); // postfix

    protected:

    private:
        int m_data;
};

#endif // JWSDATA_H
