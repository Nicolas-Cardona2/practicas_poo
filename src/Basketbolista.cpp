#include "Basketbolista.h"
#include <iostream>

Basketbolista::Basketbolista() {}

Basketbolista::Basketbolista(string n, int e, string c, string cod, string p, string g,
                             int pts, int a, int r, int f, string pos)
    : Deportista(n, e, c, cod, p, g), puntos(pts), asistencias(a), rebotes(r), faltas(f), posicion(pos) {}

int Basketbolista::getPuntos() { return puntos; }
int Basketbolista::getAsistencias() { return asistencias; }
int Basketbolista::getRebotes() { return rebotes; }
int Basketbolista::getFaltas() { return faltas; }
string Basketbolista::getPosicion() { return posicion; }

void Basketbolista::setPuntos(int pts) { puntos = pts; }
void Basketbolista::setAsistencias(int a) { asistencias = a; }
void Basketbolista::setRebotes(int r) { rebotes = r; }
void Basketbolista::setFaltas(int f) { faltas = f; }
void Basketbolista::setPosicion(string pos) { posicion = pos; }

void Basketbolista::mostrar() {
    Deportista::mostrar();
    cout << "Puntos: " << puntos << ", Asistencias: " << asistencias
         << ", Rebotes: " << rebotes << ", Faltas: " << faltas
         << ", Posición: " << posicion << endl;
}
