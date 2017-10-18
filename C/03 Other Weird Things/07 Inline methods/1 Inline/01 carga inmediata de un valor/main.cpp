#include <iostream>

//using namespace std;

#define PI 3.1416

int main()
{
    float area,radio;
    std::cout << "Dame el radio del circulo: ";
    std::cin >> radio;
    area=PI*radio*radio;//carga inmediata de PI
    std::cout << "El area del circulo es: " << area;
    return 0;
}
