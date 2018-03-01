#ifndef MAQUINA_H
#define MAQUINA_H

#include <string>
#include "rejilla.h"
#include "hormiga.h"

using namespace std;

class maquina {
public:
    maquina(rejilla *r);
    virtual ~maquina();
    void add_hormiga(hormiga *h);
    void iteracion();
    string estado();
private:
    rejilla *r;
    vector<hormiga*> hormigas;
};

#endif /* MAQUINA_H */

