#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

#include "Deportista.h"

class Futbolista : public Deportista {
    
    public:
    Futbolista();
    Futbolista(string nombre, int edad, string cedula, string codigo, string programa, string genero,
        int goles, int asistencias, int faltas, string posicion);

    
    void setGoles(int);
    int getGoles();
    void setAsistencias(int);
    int getAsistencias();
    void setFaltas(int);
    int getFaltas();
    void setPosicion(string);
    string getPosicion();
    
    
    void mostrar();
    
    private:
        int goles;
        int asistencias;
        int faltas;
        string posicion;
};

#endif
