#ifndef HORMIGA2_H
#define HORMIGA2_H

#include <string>
#include "rejilla.h"
#include "hormiga.h"

using namespace std;

class hormiga2: public hormiga {
public:
    hormiga2(int x, int y, rejilla *r): hormiga(x,y,r) {}
protected:
    virtual void mover();  // <---- METODO SOBRECARGADO EN EL HIJO
};

#endif /* HORMIGA_H */

