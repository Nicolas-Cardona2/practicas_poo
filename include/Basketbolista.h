#ifndef BASKETBOLISTA_H
#define BASKETBOLISTA_H

#include "Deportista.h"

class Basketbolista : public Deportista {
private:
    int puntos;
    int asistencias;
    int rebotes;
    int faltas;
    string posicion;

public:
    Basketbolista();
    Basketbolista(string, int, string, string, string, string, int, int, int, int, string);

    int getPuntos();
    int getAsistencias();
    int getRebotes();
    int getFaltas();
    string getPosicion();

    void setPuntos(int);
    void setAsistencias(int);
    void setRebotes(int);
    void setFaltas(int);
    void setPosicion(string);

    void mostrar();
};

#endif
