#include <iostream>
#include <map>

using namespace std;

class name
{
    string str;
public:
    name(){ str = ""; }
    name(string s){ str = s; }
    string get(){ return str; }
};

class phoneNumber
{
    string str;
public:
    phoneNumber(){ str = ""; }
    phoneNumber(string s){ str = s; }
    string get(){ return str; }
};

bool operator<(name a, name b)
{
    return a.get() < b.get();
}

int main()
{
    map<name, phoneNumber> directory;

    directory.insert(pair<name, phoneNumber>(name("Mouse"), phoneNumber("111-222-3333")));
    directory.insert(pair<name, phoneNumber>(name("Duck"), phoneNumber("111-222-3334")));
    directory.insert(pair<name, phoneNumber>(name("Zibera"), phoneNumber("111-222-3335")));

    map<name, phoneNumber>::iterator p;

    p = directory.find(name("Mouse"));
    if(p != directory.end())
    {
        cout << "Mouse: Phone number: " << p->second.get() << endl;
    }
    else
    {
        cout << "Name is not in directory\n";
    }

    // use operator[]...easier than using iterator above
    directory[name("Lamb")] = phoneNumber("111-333-5555");
    cout << "Lamb: Phone number: " << directory[name("Lamb")].get() << endl;
    directory[name("Tiger")] = phoneNumber("111-444-6666");
    cout << "Tiger: Phone number: " << directory[name("Tiger")].get() << endl;
    cout << "Duck: Phone number: " << directory[name("Duck")].get() << endl;
    cout << "Zibera: Phone number: " << directory[name("Zibera")].get() << endl;

    multimap<string, string> clients;

    clients.insert(pair<string, string>("Disney", "Donald"));
    clients.insert(pair<string, string>("Disney", "Mickey"));
    clients.insert(pair<string, string>("Disney", "Goofy"));

    multimap<string, string>::iterator p1;

    string n("Disney");

    p1 = clients.find(string(n));
    if(p1 != clients.end())
    {
        do
        {
            cout << n << " , " << p1->second << endl;
            p1++;
        } while(p1 != clients.upper_bound(n));
    }


    return 0;
}
