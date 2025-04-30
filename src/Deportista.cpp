#include "Deportista.h"
#include <iostream>

Deportista::Deportista() {}

Deportista::Deportista(string n, int e, string c, string cod, string p, string g)
    : nombre(n), edad(e), cedula(c), codigo(cod), programa(p), genero(g) {}

void Deportista::setNombre(string n){
    nombre = n; 
}
string Deportista::getNombre(){
    return nombre;
}
void Deportista::setEdad(int e){
    edad = e;
}
int Deportista::getEdad(){
    return edad;
}
void Deportista::setCedula(string c){
    cedula = c;
}
string Deportista::getCedula(){
    return cedula;
}
void Deportista::setCodigo(string cod){
    codigo = cod;
}
string Deportista::getCodigo(){
    return codigo;
}
void Deportista::setPrograma(string p){
    programa = p;
}
string Deportista::getPrograma(){
    return programa;
}
void Deportista::setGenero(string g){
    genero = g;
}
string Deportista::getGenero(){
    return genero;
}


void Deportista::mostrar() {
    cout << "Nombre: " << nombre << ", Edad: " << edad
         << ", Cédula: " << cedula << ", Código: " << codigo
         << ", Programa: " << programa << ", Género: " << genero << endl;
}
