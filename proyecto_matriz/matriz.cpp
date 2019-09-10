//
// Created by Alejandro  Otero on 2019-09-03.
//
#include <iostream>
#include "matriz.h"

Matriz::Matriz() {
    mat=nullptr;
    filas=0;
    columnas=0;
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
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            mat[i][j]=(rand()%5);
        }
    }
}

void Matriz::mulitplicacion(const Matriz& matrix) {
    if (columnas==matrix.columnas){
        for (int i=0; i<filas; i++){
            for (int j=0; j<matrix.columnas; j++){
                for (int x=0; x<columnas; x++)
                    mat[i][j]=mat[i][x]*matrix[x][j];
            }
        }
    }else
        std::cout<<"No se puede multiplicar";
}

void Matriz::escalar(int n) {
    for (int i=0; i<filas;i++){
        for (int j=0; j<columnas; j++){
            mat[i][j]=mat[i][j]*n;
        }
    }
}

void Matriz::suma(const Matriz& matrix) {
    if (filas==matrix.filas and columnas==matrix.columnas){
        for (int i=0; i<filas; i++){
            for (int j=0; j<columnas; j++){
                mat[i][j]=matrix[i][j]+mat[i][j];
            }
        }
    } else
        std::cout<<"No es posible";
}

void Matriz::trasposicion() {
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas;j++){
            mat[i][j]=mat[j][i];
        }
    }
}

void Matriz::mostrar() {
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            std::cout<<mat[i][j];
        }
    }
}

Matriz::~Matriz() {
    delete [] mat;
}

