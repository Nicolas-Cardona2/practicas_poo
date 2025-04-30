#include "Nadador.h"
#include <iostream>
#include <numeric>

Nadador::Nadador() {}

Nadador::Nadador(string n, int e, string c, string cod, string p, string g,
                 string est, vector<float> t, float pes)
    : Deportista(n, e, c, cod, p, g), estilo(est), tiempo(t), peso(pes) {}

string Nadador::getEstilo() { return estilo; }
vector<float> Nadador::getTiempo() { return tiempo; }
float Nadador::getPeso() { return peso; }

void Nadador::setEstilo(string est) { estilo = est; }
void Nadador::setTiempo(vector<float> t) { tiempo = t; }
void Nadador::setPeso(float p) { peso = p; }

float Nadador::calcularPromedioTiempos() {
    if (tiempo.empty()) return 0;
    float suma = accumulate(tiempo.begin(), tiempo.end(), 0.0f);
    return suma / tiempo.size();
}

void Nadador::mostrar() {
    Deportista::mostrar();
    cout << "Estilo: " << estilo << ", Peso: " << peso << ", Tiempos: ";
    for (float t : tiempo) {
        cout << t << " ";
    }
    cout << "\nPromedio de tiempos: " << calcularPromedioTiempos() << endl;
}
