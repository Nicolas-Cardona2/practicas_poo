#include "Futbolista.h"
#include <iostream>

Futbolista::Futbolista() {}

Futbolista::Futbolista(string nombre, int edad, string cedula, string codigo, string programa, string genero,
                       int goles, int asistencias, int faltas, string posicion)
    : Deportista(nombre, edad, cedula, codigo, programa, genero),
      goles(goles), asistencias(asistencias), faltas(faltas), posicion(posicion){

      }

void Futbolista::setGoles(int g){
    goles = g;
}
int Futbolista::getGoles(){
    return goles;
}
void Futbolista::setAsistencias(int a){
    asistencias = a;
}
int Futbolista::getAsistencias(){
    return asistencias;
}
void Futbolista::setFaltas(int f){
    faltas = f;
}
int Futbolista::getFaltas(){
    return faltas;
}
void Futbolista::setPosicion(string pos){
    posicion = pos;
}
string Futbolista::getPosicion(){
    return posicion;
}


void Futbolista::mostrar() {
    Deportista::mostrar();
    std::cout << "Goles: " << goles << ", Asistencias: " << asistencias
              << ", Faltas: " << faltas << ", Posición: " << posicion << std::endl;
}
