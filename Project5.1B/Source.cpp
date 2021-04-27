//Source.ccp
#include <Windows.h> 
#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double N;

    Money a, b, c;


    try
    {

        cin >> c;
    }
    catch (invalid_argument e)
    {

        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {

        cout << e.what() << endl;
    }
    catch (MyException& e)
    {

        cout << e.what() << endl;
    }
    catch (const char* e)
    {

        cerr << e << endl;
    }


    cout << "Ввід першої кількості номіналів::" << endl;
    cin >> a;
    cout << a << endl << endl;
    cout << "Ввід другої кількості номіналів::" << endl;
    cin >> b;
    cout << b << endl << endl;

    cout << "a + b = " << a + b;
    cout << "a - b = " << a - b;
    cout << "(a + b)*N = " << a * b;

    cout << "++a" << endl; cout << ++a << endl;
    cout << "--a" << endl; cout << --a << endl;
    cout << "a++" << endl; cout << a++ << endl;
    cout << "a--" << endl; cout << a-- << endl;
}
