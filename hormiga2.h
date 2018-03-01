#ifndef HORMIGA2_H
#define HORMIGA2_H

#include <string>
#include "hormiga.h"

using namespace std;

class hormiga2: public hormiga {
public:
    hormiga2(int x, int y, rejilla *r): hormiga(x,y,r) {}
    void mover();    // <---- METODO SOBRECARGADO EN EL HIJO
};

#endif /* HORMIGA2_H */

