#include <iostream>

using namespace std;

const float PI=3.1416;

int main()
{
    float area,radio;
    cout << "Dame el radio del circulo: ";
    cin >> radio;
    area=PI*radio*radio;//direccionamiento de PI
    cout << "El area del circulo es: " << area;
    return 0;
}
