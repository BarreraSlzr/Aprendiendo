#include <iostream>

using namespace std;

int main()
{
    int a;
    float b,c;
    cout << "Dame un entero" << endl;
    cin >> a;
    cout << "Dame un flotante" << endl;
    cin >> b;
    c=a+b;
    cout << a << "+" << b << "=" <<
        c << endl;//funciona con este salto de linea?
    return 0;
}
