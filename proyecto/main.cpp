#include <iostream>
#include "emergencia.h"

using namespace std;

int main() {
    const int MAX_REGISTROS = 100;
    Emergencia registros[MAX_REGISTROS];
    int totalRegistros = 0;
    int opcion;

    do {
        cout << "\n==================================================\n";
        cout << "   CENTRAL CENTRALIZADA DE EMERGENCIAS - TACNA\n";
        cout << "==================================================\n";
        cout << "1. Registrar Llamada\n";
        cout << "2. Listar Emergencias\n";
        cout << "3. Buscar por ID\n";
        cout << "4. Modificar Estado\n";
        cout << "5. Eliminar Registro\n";
        cout << "6. Salir del Sistema\n";
        cout << "==================================================\n";
        cout << "Seleccione una opcion (1-6): ";
        cin >> opcion;

        if (opcion == 6) {
            cout << "\nCerrando el sistema correctamente...\n";
        } else if (opcion < 1 || opcion > 6) {
            cout << "\n[ERROR] Opcion no valida.\n";
        }

    } while(opcion != 6);

    return 0;
}
