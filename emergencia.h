#ifndef EMERGENCIA_H
#define EMERGENCIA_H
#include <string>

using namespace std;

struct Emergencia {
    int idLlamada;
    string nombre;
    string zona;
    string institucion;
    string hora;
    string estado;
};

void registrarLlamada(Emergencia lista[], int &contador);
void mostrarLlamadas(const Emergencia lista[], int contador);

#endif
