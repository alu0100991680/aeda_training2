#include "rejilla.h"

rejilla::rejilla(int dx, int dy) {
    this->dx = dx;
    this->dy = dy;

    // Redimensionamos la matriz
    this->c_rejilla.resize(dx);
    for (int i = 0; i < dx; ++i){
        this->c_rejilla[i].resize(dy);
    }
    
    //Seteamos por defecto los primeros valores
    for (int i = 0; i < dx; ++i){
        for (int j = 0; j < dy; ++j){
            // Default = 1 Blanco
            this->c_rejilla[i][j] = '1';
        }
    }
}

int rejilla::get_size_x(){
    return this->dx;
}

int rejilla::get_size_y(){
    return this->dy;
}

string rejilla::get_rejilla_status(){
    string aux_ = "";
    for (int i = 0; i < this->dx; ++i){
        for (int j = 0; j < this->dy; ++j){
            if (this->c_rejilla[i][j]=='0'){
                //aux_ += "X ";
                aux_ += "0 ";
            }
            if (this->c_rejilla[i][j]=='1'){
                //aux_ += "  ";
                aux_ += "1 ";
            }
        }
        aux_ += "\r\n";
    }
    return aux_;
}


char rejilla::get_position_status(int x, int y){
    return this->c_rejilla[x][y];
}

void rejilla::set_position_status(int x, int y, char value_color){
    this->c_rejilla[x][y] = value_color;
}

rejilla::rejilla(const rejilla& orig) {
    this->dx = orig.dx;
    this->dy = orig.dy;
    this->c_rejilla = orig.c_rejilla;
}

rejilla::~rejilla() {
}

