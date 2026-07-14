#include <iostream>
#include <string>
#include "emergencia.h"

using namespace std;

// 1. REGISTRAR LLAMADA (Create)
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

// 2. LISTAR EMERGENCIAS (Read)

void mostrarLlamadas(const Emergencia lista[], int contador) {
    if (contador == 0) {
        cout << "\n[!] No hay registros guardados.\n";
        return;
    }
    cout << "\n--- LISTA GENERAL DE INCIDENTES ---\n";
    for(int i = 0; i < contador; i++) {
        cout << "ID: " << lista[i].idLlamada 
             << " | Ciudadano: " << lista[i].nombre 
             << " | Zona: " << lista[i].zona 
             << " | Unidad: " << lista[i].institucion 
             << " | Hora: " << lista[i].hora 
             << " | Estado: " << lista[i].estado << endl;
    }
}

// 3. BUSCAR POR ID (Read)

void buscarEmergencia(const Emergencia lista[], int contador) {
    if (contador == 0) {
        cout << "\n[!] Sistema vacio.\n";
        return;
    }
    int idBuscado;
    bool encontrado = false;
    cout << "\nIngrese el ID de la emergencia a buscar: ";
    cin >> idBuscado;

    for(int i = 0; i < contador; i++) {
        if(lista[i].idLlamada == idBuscado) {
            cout << "\n[Registro Encontrado]\n";
            cout << "ID: " << lista[i].idLlamada << "\nCiudadano: " << lista[i].nombre 
                 << "\nZona: " << lista[i].zona << "\nUnidad: " << lista[i].institucion 
                 << "\nHora: " << lista[i].hora << "\nEstado: " << lista[i].estado << endl;
            encontrado = true;
            break; 
        }
    }
    if(!encontrado) cout << "\n[!] No se encontro ninguna llamada con ese ID.\n";
}

// 4. MODIFICAR ESTADO (Update)

void modificarEstado(Emergencia lista[], int contador) {
    if (contador == 0) {
        cout << "\n[!] No hay llamadas para modificar.\n";
        return;
    }
    int idBuscado;
    cout << "\nIngrese el ID de la llamada a actualizar: ";
    cin >> idBuscado;

    for(int i = 0; i < contador; i++) {
        if(lista[i].idLlamada == idBuscado) {
            int opcEstado;
            cout << "\nEstado actual: " << lista[i].estado << endl;
            cout << "Seleccione nuevo estado: 1. En_Curso  2. Atendido\nOpcion: ";
            cin >> opcEstado;
            if(opcEstado == 1) lista[i].estado = "En_Curso";
            else if(opcEstado == 2) lista[i].estado = "Atendido";
            
            cout << "\n[OK] Estado actualizado correctamente.\n";
            return;
        }
    }
    cout << "\n[!] El ID especificado no existe.\n";
}

// 5. ELIMINAR LLAMADA (Delete)

void eliminarLlamada(Emergencia lista[], int &contador) {
    if (contador == 0) {
        cout << "\n[!] Nada que eliminar.\n";
        return;
    }
    int idBuscado;
    cout << "\nIngrese el ID del registro a eliminar: ";
    cin >> idBuscado;

    for(int i = 0; i < contador; i++) {
        if(lista[i].idLlamada == idBuscado) {
            for(int j = i; j < contador - 1; j++) {
                lista[j] = lista[j + 1];
            }
            contador--; 
            cout << "\n[OK] Registro eliminado con exito del sistema.\n";
            return;
        }
    }
    cout << "\n[!] No se encontro el ID proporcionado.\n";
}
