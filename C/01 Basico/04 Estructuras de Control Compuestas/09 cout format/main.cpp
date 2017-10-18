#include <iostream>
#include <iomanip>

using namespace std;

#define CONFIG_IMPRESION_INT setfill('_') << setw(3)

int main()
{
    int a;
    float b;
    cout << "Dame un entero" << endl;
    cin >> a;//captura un 2
    cout << "Dame un flotante" << endl;
    cin >> b;//captura un 3.4 porfa
    cout << "a sin formato *" << a << endl;
    cout << "b sin formato *" << b << endl;
    cout << "b fixed       *" << setiosflags(ios::fixed) << b << endl;//que si comento esta?
    cout << "b precision   *" << setprecision(5) << b << endl;//le agrega precision
    cout << "a con setw    *" << setw(3) << a << "*" << endl;//setfill por defecto es ' '
    cout << "a con setfill *" << setfill('-') << setw(3) << a << "*" << endl;
    cout << "b con formato *" << setprecision(7) << setiosflags(ios::fixed) << b << endl;
    cout << "a con define  *" << CONFIG_IMPRESION_INT << a << "*" << endl;
    cout << a << endl;//usa la configuracion por defecto
    cout << b << endl;//usa la configuracion anterior
    cout << "b con setw    *" << setw(10) << b << "*" << endl;//usa el setfill previo
    cout << "b con setfill *" << setfill('0') << setw(10) << b << "*" << endl;
    cout << b << endl;//usa la configuracion sin setw ni setfill
    return 0;
}
