#include <iostream>

using namespace std;

template <typename T>
class Auto_ptr
{
    T*  m_ptr;
public:
    Auto_ptr(T* ptr=nullptr):
    m_ptr(ptr)
    {
        cout << "Auto_ptr: m_ptr Adress: " << m_ptr << endl;
    }

    ~Auto_ptr()
    {
        delete m_ptr;
        cout << "~Auto_ptr\n";
    }

    // transfer pointer ownership
    Auto_ptr(Auto_ptr &a)
    {
        cout << "Auto_ptr Copy Constructor\n";

        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
    }

    Auto_ptr &operator=(Auto_ptr &a)
    {
        cout << "Auto_ptr Assignment (operator=)\n";

        if(&a == this)
        {
            return *this;
        }

        delete m_ptr;
        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
        return *this;
    }

    T& operator*() const { return *m_ptr; }
    T* operator->() const { return m_ptr; }
    bool IsNull() const { return m_ptr == nullptr; }
};

class Resource
{
    int m_data;
public:
    Resource(int data)
    {
        m_data = data;
        cout << "Address: " << this << ", Resource Acquired\n";
    }
    ~Resource(){ cout << "Address: " << this << ", Resource Released\n"; }

    void Show(){ cout << "Data: " << m_data << endl; }
};

void ShowState(string name, Auto_ptr<Resource> &p)
{
    cout << name << " is " << (p.IsNull() ? "null\n" : "not null\n");
}

void Test()
{
    cout << "resa instantiation\n";
    Auto_ptr<Resource> resa(new Resource(10));
    ShowState("resa", resa);
    Auto_ptr<Resource> resb;
    ShowState("resb", resb);
    resa->Show();
    resb = resa;
    ShowState("resb", resb);
    ShowState("resa", resa);
    resb->Show();
}

int main()
{
    cout << "res1 instantiation\n";
    Auto_ptr<Resource> res1(new Resource(5));
    res1->Show();
    ShowState("res1", res1);
    Auto_ptr<Resource> res2(res1);
    ShowState("res2", res2);
    ShowState("res1", res1);
    res2->Show();
    cout << ">>>Test()\n";
    Test();
    cout << "<<<Test()\n";
    return 0;
}
