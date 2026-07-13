#include <iostream>
#include <string>
#include "emergencia.h"
using namespace std;
void registrarLlamada(Emergencia lista[], int &contador) {
    if (contador >= 100) {
        cout << "\n[!] Almacenamiento lleno.\n";
        return;
    }
    cout << "\n--- REGISTRAR EMERGENCIA ---\n";
    lista[contador].idLlamada = 1000 + contador + 1;
    cout << "Nombre del ciudadano (Sin_espacios): ";
    cin >> lista[contador].nombre;
    cout << "Zona o Distrito de Tacna: ";
    cin >> lista[contador].zona;
    cout << "Institucion (Policia/Bomberos/Serenazgo): ";
    cin >> lista[contador].institucion;
    cout << "Hora del suceso (HH:MM): ";
    cin >> lista[contador].hora;
    
    lista[contador].estado = "Pendiente";
    contador++;
    cout << "\n[OK] Emergencia guardada con ID: " << lista[contador-1].idLlamada << endl;
}
