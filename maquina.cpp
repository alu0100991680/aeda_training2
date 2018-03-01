#include "maquina.h"

maquina::maquina(rejilla *r) {
    this->r = r;
}

maquina::~maquina() {
}

void maquina::add_hormiga(hormiga* h){
    this->hormigas.push_back(h);
}

void maquina::iteracion(){
    for (int i=0;i<this->hormigas.size();i++){
        this->hormigas[i]->mover();
    }
}

string maquina::estado(){
    string string_rejilla = "";
    
    int dx = this->r->get_size_x();
    int dy = this->r->get_size_y();
    rejilla *copy_r = new rejilla(*this->r);
    
    for (int a=0;a<this->hormigas.size();a++){
        copy_r->set_position_status(this->hormigas[a]->get_x(), this->hormigas[a]->get_y(), this->hormigas[a]->get_direccion_display());
    }
    
    for (int i = 0; i < dx; ++i){
        for (int j = 0; j < dy; ++j){
            //this->
                    
            if (copy_r->get_position_status(i, j)=='0'){
                string_rejilla += "X";
            }else if(copy_r->get_position_status(i, j)=='1'){
                string_rejilla += " ";
            }else{
                string_rejilla += copy_r->get_position_status(i, j);
            }
            
        }
        string_rejilla += "\r\n";
    }
    string_rejilla += "\r\n";
    return string_rejilla;
}
