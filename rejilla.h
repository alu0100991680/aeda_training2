#ifndef REJILLA_H
#define REJILLA_H

#include <string>
#include <vector>
//#include "hormiga.h"

using namespace std;

class rejilla {
public:
    rejilla(int dx, int dy);
    rejilla(const rejilla& orig);
    virtual ~rejilla();
    int get_size_x();
    int get_size_y();
    string get_rejilla_status();
    char get_position_status(int x, int y);
    void set_position_status(int x, int y, char value_color);
    enum colores {negro='0', blanco='1'};
private:
    int dx;
    int dy;
    vector<vector<char> > c_rejilla;
    
    
};

#endif /* REJILLA_H */

