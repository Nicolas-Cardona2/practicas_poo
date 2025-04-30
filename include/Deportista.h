#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <string>
using namespace std;

class Deportista {
    
    public:
    Deportista();
    Deportista(string n, int e, string c, string cod, string p, string g);
    
    void setNombre(string);
    string getNombre();
    void setEdad(int);
    int getEdad();
    void setCedula(string);
    string getCedula();
    void setCodigo(string);
    string getCodigo();
    void setPrograma(string);
    string getPrograma();
    void setGenero(string);
    string getGenero();
    
    void mostrar();
    
    protected:
        string nombre;
        int edad;
        string cedula;
        string codigo;
        string programa;
        string genero;
};

#endif
