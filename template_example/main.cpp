/* @file main.cpp
 *
 * @brief the main entry point for template example
 *
 * Used stl vector in this example to show template usage
 *
 * @author James Strouth
 * Contact: jamesstrouth@gmail.com
 *
 */

 #include <iostream>
 using namespace std;

 #include <jwsVector.h>

 int main(int argc, char **argv)
 {
    jwsVector<int> v1;
    jwsVector<float> v2;
    jwsVector<char> v3;
    jwsVector<double> v4;

    int i;
    cout << "Enter int (" << sizeof(i) << ")\n";
    v1.run();

    float f;
    cout << "Enter float (" << sizeof(f) << ")\n";
    cout << "Enter float\n";
    v2.run();

    char c;
    cout << "Enter char (" << sizeof(c) << ")\n";
    cout << "Enter char\n";
    v3.run();

    double d;
    cout << "Enter double (" << sizeof(d) << ")\n";
    cout << "Enter double\n";
    v4.run();

    return 0;
 }
