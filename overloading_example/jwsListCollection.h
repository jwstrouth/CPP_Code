#ifndef JWSLISTCOLLECTION_H
#define JWSLISTCOLLECTION_H

#include <list>

#include "jwsData.h"

class jwsListCollection
{
    public:
        jwsListCollection();
        virtual ~jwsListCollection();

        void Show()
        {
            cout << "List Collection State: " << m_data.empty() << " (1 means empty, 0 means not empty)\n";
            cout << "List Size: " << m_data.size() << endl;
        }

        void Add(jwsData d){ m_data.push_front(d); }
        void Remove(){ m_data.pop_front(); }
        void operator+(jwsData data)
        {
            cout << "push_front using operator+\n";
            m_data.push_front(data);
        }
        jwsData Get(int i)
        {
            auto data = m_data.begin();
            std::advance(data, i);
            return *data;
        }
        jwsData operator[](int i){ return Get(i); }

    protected:

    private:
        list<jwsData> m_data;
};

#endif // JWSLISTCOLLECTION_H
