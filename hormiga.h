#ifndef HORMIGA_H
#define HORMIGA_H

#include <string>
#include "rejilla.h"

using namespace std;

class hormiga {
public:
    hormiga(int x, int y, rejilla *r);
    virtual ~hormiga();
    int get_x();
    int get_y();
    rejilla *get_rejilla();
    char get_direccion_display();
    void modificar_posicion(int _x, int _y);
    void mover();
    enum direcciones { arriba=0, abajo=1, derecha=2, izquierda=3 };
private:
    int x;
    int y;
    rejilla *r_asocida;
    int direccion_display;
};

#endif /* HORMIGA_H */

