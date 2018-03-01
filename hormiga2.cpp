#include "hormiga2.h"

void hormiga2::mover() {
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


