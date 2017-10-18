#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#define CARACTERES_POR_FILA 80

using namespace std;

//para preguntar por Unix se usa __unix__
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

void liberaScan();
void pausa(string texto);
void pausar();
void pausarTerminar();
void imprimirCentrado(string texto,string relleno);
string intToString(int x);

#endif // UTIL_H_INCLUDED
