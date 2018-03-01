#include <cstdlib>
#include <iostream>
#include "rejilla.h"
#include "hormiga.h"
#include "hormiga2.h" //Heredada
#include "maquina.h"

using namespace std;

int main(int argc, char** argv) {

    rejilla *r = new rejilla(100,100);
    
    //hormiga *a = new hormiga(50,50,r);
    hormiga2 *b = new hormiga2(50,50,r);  // <--- CLASE DERIVADA
    
    maquina *m = new maquina(r);
    //m->add_hormiga(a);
    m->add_hormiga(b);
    
    for (int i=0;i<15000;i++){
        m->iteracion();
    }
    cout << m->estado();
        
    return 0;
}

