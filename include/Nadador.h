#ifndef NADADOR_H
#define NADADOR_H

#include "Deportista.h"
#include <vector>

class Nadador : public Deportista {
private:
    string estilo;
    vector<float> tiempo;
    float peso;

public:
    Nadador();
    Nadador(string, int, string, string, string, string, string, vector<float>, float);

    string getEstilo();
    vector<float> getTiempo();
    float getPeso();

    void setEstilo(string);
    void setTiempo(vector<float>);
    void setPeso(float);

    float calcularPromedioTiempos();
    void mostrar();
};

#endif
