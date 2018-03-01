#include "hormiga.h"

hormiga::hormiga(int x, int y, rejilla *r) {
    this->x = x;
    this->y = y;
    this->direccion_display = 0;
    this->r_asocida = r;
}

void hormiga::modificar_posicion(int _x, int _y){    
    if (this->x+_x<0){
        this->x=0;
    }else{
        if (this->r_asocida->get_size_x()<this->x+_x){
            this->x=this->r_asocida->get_size_x();
        }else{
            this->x = this->x+_x;
        }
    }
    
    if (this->y+_y<0){
        this->y=0;
    }else{
        if (this->r_asocida->get_size_y()<this->y+_y){
            this->y=this->r_asocida->get_size_y();
        }else{
            this->y = this->y+_y;
        }
    }
}

void hormiga::mover() {
    //int color_actual  = this->r_asocida[this->x][this->y];
    int color_actual  = this->r_asocida->get_position_status(this->x, this->y);
    
    //Comportamientos
    if (color_actual==this->r_asocida->negro){ //Negro
        if (this->direccion_display == 0){ // Giro a la der desde ^
            //Giramos a la derecha
            this->direccion_display = 2; // >
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, this->r_asocida->blanco); // Pasa blanco
            //Movemos hormiga
            this->modificar_posicion(0,1); //Avance derecha
        }else if (this->direccion_display == 1){ // Giro a la der desde v
            //Giramos a la derecha
            this->direccion_display = 3; // <
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, this->r_asocida->blanco); // Pasa blanco
            //Movemos hormiga
            this->modificar_posicion(0,-1); // Avance izqu
        }else if (this->direccion_display == 2){ // Giro a la der desde >
            //Giramos a la derecha
            this->direccion_display = 1; // v
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, this->r_asocida->blanco); // Pasa blanco
            //Movemos hormiga
            this->modificar_posicion(1,0); // Avance abajo
        }else if (this->direccion_display == 3){ // Giro a la der desde <
            //Giramos a la derecha
            this->direccion_display = 0; // ^
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, this->r_asocida->blanco); // Pasa blanco
            //Movemos hormiga
            this->modificar_posicion(-1,0); // Avance arriba
        }
    }else if (color_actual==this->r_asocida->blanco){ // Blanco
        if (this->direccion_display == 0){ // Giro a la der desde ^
            //Giramos a la derecha
            this->direccion_display = 3; // <
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, this->r_asocida->negro); // Pasa negro
            //Movemos hormiga
            this->modificar_posicion(0,-1); //Avance izquierda
        }else if (this->direccion_display == 1){ // Giro a la der desde v
            //Giramos a la derecha
            this->direccion_display = 2; // >
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, this->r_asocida->negro); // Pasa negro
            //Movemos hormiga
            this->modificar_posicion(0,1); // Avance derecha
        }else if (this->direccion_display == 2){ // Giro a la der desde >
            //Giramos a la derecha
            this->direccion_display = 0; // ^
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, this->r_asocida->negro); // Pasa negro
            //Movemos hormiga
            this->modificar_posicion(-1,0);  // Avance arriba
        }else if (this->direccion_display == 3){ // Giro a la der desde <
            //Giramos a la derecha
            this->direccion_display = 1; // v
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, this->r_asocida->negro); // Pasa negro
            //Movemos hormiga
            this->modificar_posicion(1,0); // Avance arriba 
        }
    }
}

char hormiga::get_direccion_display() {
    if(this->direccion_display == arriba){
        return '^';
    }
    if(this->direccion_display == abajo){
        return 'v';
    }    
    if(this->direccion_display == izquierda){
        return '<';
    }    
    if(this->direccion_display == derecha){
        return '>';
    }
}

rejilla * hormiga::get_rejilla(){
    return this->r_asocida;
}

int hormiga::get_x() {
    return this->x;
}

int hormiga::get_y() {
    return this->y;
}

hormiga::~hormiga() {
}

