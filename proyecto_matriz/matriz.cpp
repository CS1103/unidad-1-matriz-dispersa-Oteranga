//
// Created by Alejandro  Otero on 2019-09-03.
//

#include "matriz.h"

Matriz::Matriz() {

}

Matriz::Matriz(int _columnas, int _filas) {
    columnas=_columnas;
    filas=_filas;
    mat=new int*[filas];
    for (int i=0;i<filas;i++){
        mat[i]=new int [columnas];
    }
}

void Matriz::llenar() {

}

void Matriz::mulitplicacion(const Matriz &, const Matriz &) {

}

void Matriz::escalar(int n, const Matriz &) {
    for (int i=0; i<filas;i++){
        for (int j=0; j<columnas; j++){
            mat[i][j]=mat[i][j]*n;
        }
    }
}

void Matriz::suma(const Matriz &, const Matriz &) {

}

void Matriz::trasposicion(const Matriz &) {
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas;j++){
            mat[i][j]=mat[j][i];
        }
    }
}

Matriz::~Matriz() {

}

