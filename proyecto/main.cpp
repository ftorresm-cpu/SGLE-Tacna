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
        cout << "1. Registrar Llamada de Emergencia (Create)\n";
        cout << "2. Listar Todas las Emergencias (Read)\n";
        cout << "3. Buscar Emergencia por ID (Read)\n";
        cout << "4. Modificar Estado de la Emergencia (Update)\n";
        cout << "5. Eliminar Registro de Emergencia (Delete)\n";
        cout << "6. Salir del Sistema\n";
        cout << "==================================================\n";
        cout << "Seleccione una opcion (1-6): ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                registrarLlamada(registros, totalRegistros);
                break;
            case 2:
                mostrarLlamadas(registros, totalRegistros);
                break;
            case 3:
                buscarEmergencia(registros, totalRegistros);
                break;
            case 4:
                modificarEstado(registros, totalRegistros);
                break;
            case 5:
                eliminarLlamada(registros, totalRegistros);
                break;
            case 6:
                cout << "\nFinalizando monitoreo. Sistema cerrado correctamente.\n";
                break;
            default:
                cout << "\n[ERROR] Opcion no valida. Intente de nuevo.\n";
        }
    } while(opcion != 6);

    return 0;
}
