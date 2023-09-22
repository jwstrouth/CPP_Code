#include "jwsData.h"

jwsData::jwsData(int i)
{
    m_data = i;
    cout << "jwsData: Address: " << this << endl;
}

jwsData::~jwsData()
{
    cout << "~jwsData: Address: " << this << endl;
}

jwsData jwsData::operator+(jwsData data)
{
    jwsData temp(0);
    temp.m_data = m_data + data.m_data;
    return temp;
}

jwsData jwsData::operator++()
{
    m_data++;
    return *this;
}

jwsData jwsData::operator++(int x)
{
    jwsData temp(m_data); // save old value
    m_data++;
    return temp; // return old value
}
