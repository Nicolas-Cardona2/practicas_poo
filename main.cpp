#include <iostream>
#include <vector>
#include "Futbolista.h"
#include "Basketbolista.h"
#include "Nadador.h"

using namespace std;

int main() {
    vector<Futbolista> futbolistas;
    vector<Basketbolista> basketbolistas;
    vector<Nadador> nadadores;

    int opcion;

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Agregar Futbolista\n";
        cout << "2. Agregar Basketbolista\n";
        cout << "3. Agregar Nadador\n";
        cout << "4. Mostrar Goleador\n";
        cout << "5. Mostrar Jugador con mas faltas\n";
        cout << "6. Mostrar promedio de tiempos en natacion\n";
        cout << "7. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1 && futbolistas.size() < 6) {
            string nombre, cedula, codigo, programa, genero, posicion;
            int edad, goles, asistencias, faltas;

            cout << "Nombre: "; cin >> nombre;
            cout << "Edad: "; cin >> edad;
            cout << "Cedula: "; cin >> cedula;
            cout << "Codigo: "; cin >> codigo;
            cout << "Programa: "; cin >> programa;
            cout << "Genero: "; cin >> genero;
            cout << "Goles: "; cin >> goles;
            cout << "Asistencias: "; cin >> asistencias;
            cout << "Faltas: "; cin >> faltas;
            cout << "Posicion: "; cin >> posicion;

            futbolistas.push_back(Futbolista(nombre, edad, cedula, codigo, programa, genero,
                                             goles, asistencias, faltas, posicion));

        } else if (opcion == 2 && basketbolistas.size() < 7) {
            string nombre, cedula, codigo, programa, genero, posicion;
            int edad, puntos, asistencias, rebotes, faltas;

            cout << "Nombre: "; cin >> nombre;
            cout << "Edad: "; cin >> edad;
            cout << "Cedula: "; cin >> cedula;
            cout << "Codigo: "; cin >> codigo;
            cout << "Programa: "; cin >> programa;
            cout << "Genero: "; cin >> genero;
            cout << "Puntos: "; cin >> puntos;
            cout << "Asistencias: "; cin >> asistencias;
            cout << "Rebotes: "; cin >> rebotes;
            cout << "Faltas: "; cin >> faltas;
            cout << "Posicion: "; cin >> posicion;

            basketbolistas.push_back(Basketbolista(nombre, edad, cedula, codigo, programa, genero,
                                                    puntos, asistencias, rebotes, faltas, posicion));

        } else if (opcion == 3 && nadadores.size() < 2) {
            string nombre, cedula, codigo, programa, genero, estilo;
            int edad, numTiempos;
            float peso, tiempoTemp;
            vector<float> tiempos;

            cout << "Nombre: "; cin >> nombre;
            cout << "Edad: "; cin >> edad;
            cout << "Cedula: "; cin >> cedula;
            cout << "Codigo: "; cin >> codigo;
            cout << "Programa: "; cin >> programa;
            cout << "Genero: "; cin >> genero;
            cout << "Estilo: "; cin >> estilo;
            cout << "Peso: "; cin >> peso;
            cout << "Cantidad de tiempos: "; cin >> numTiempos;

            for (int i = 0; i < numTiempos; ++i) {
                cout << "Tiempo " << i+1 << ": ";
                cin >> tiempoTemp;
                tiempos.push_back(tiempoTemp);
            }

            nadadores.push_back(Nadador(nombre, edad, cedula, codigo, programa, genero,
                                        estilo, tiempos, peso));

        } else if (opcion == 4) {
            if (futbolistas.empty()) {
                cout << "No hay futbolistas registrados.\n";
            } else {
                Futbolista goleador = futbolistas[0];
                for (Futbolista f : futbolistas) {
                    if (f.getGoles() > goleador.getGoles()) {
                        goleador = f;
                    }
                }
                cout << "\n--- Goleador ---\n";
                goleador.mostrar();
            }

        } else if (opcion == 5) {
            int maxFaltas = -1;
            string tipo = "ninguno";
            Futbolista fMax;
            Basketbolista bMax;
            bool hayJugador = false;

            for (Futbolista f : futbolistas) {
                if (f.getFaltas() > maxFaltas) {
                    maxFaltas = f.getFaltas();
                    fMax = f;
                    tipo = "futbolista";
                    hayJugador = true;
                }
            }

            for (Basketbolista b : basketbolistas) {
                if (b.getFaltas() > maxFaltas) {
                    maxFaltas = b.getFaltas();
                    bMax = b;
                    tipo = "basketbolista";
                    hayJugador = true;
                }
            }

            if (!hayJugador) {
                cout << "No hay jugadores registrados.\n";
            } else {
                cout << "\n--- Jugador con mas faltas (" << tipo << ") ---\n";
                if (tipo == "futbolista") fMax.mostrar();
                else bMax.mostrar();
            }

        } else if (opcion == 6) {
            if (nadadores.empty()) {
                cout << "No hay nadadores registrados.\n";
            } else {
                for (Nadador n : nadadores) {
                    cout << "\n--- Nadador ---\n";
                    n.mostrar();
                }
            }

        } else if (opcion == 7) {
            cout << "Saliendo...\n";
        } else {
            cout << "Opcion invalida o limite alcanzado.\n";
        }

    } while (opcion != 7);

    return 0;
}
